#include "CUTE/cute/cute.h"
#include "CUTE/cute/ide_listener.h"
#include "CUTE/cute/cute_runner.h"

// Подключение модуля с тестируемыми методами
#include "Klimova_MathTask.cpp"

using namespace cute;
using namespace std;

void test_CountDigits() {
    // Входные значения
    int a = 356;

    // Ожидаемый результат
    int expected = 3;

    // Получение значения с помощью тестируемого метода
    int actual = CountDigits(a);

    // Сравнение ожидаемого результата с полученным
    ASSERT_EQUAL(expected, actual);
}
void test_ProductOfLastNDigits() {
    // Входные значения
    int a = 437;
    int b = 2;

    // Ожидаемый результат
    int expected = 21;

    // Получение значения с помощью тестируемого метода
    int actual = ProductOfLastNDigits(a,b);

    // Сравнение ожидаемого результата с полученным
    ASSERT_EQUAL(expected, actual);
}


void test_UserInput_Empty ()
{
    // исходные данные
    string str = "";

    // ожидаемое значение результата работы проверки
    bool expected = false;

    bool actual = UserInput(str);

    ASSERT_EQUAL(expected, actual);

}

void test_UserInput_letter ()
{
    string str = "a";

    bool expected = false;
    
    bool actual = UserInput(str);

    ASSERT_EQUAL(expected, actual);
}

void test_UserInput_letter_and_numbers ()
{
    string str = "5a";

    bool expected = false;

    bool actual = UserInput(str);

    ASSERT_EQUAL(expected, actual);
}

void test_UserInput_Negative ()
{
    string str = "-5";

    bool expected = false;

    bool actual = UserInput(str);

    ASSERT_EQUAL(expected, actual);

}

int main() {
    // Создаем тестовый набор
    suite s;

    // Добавляем тестовую функцию в набор
    s.push_back(CUTE(test_ProductOfLastNDigits));
    s.push_back(CUTE(test_CountDigits));
    s.push_back(CUTE(test_UserInput_Empty));
    s.push_back(CUTE(test_UserInput_letter));
    s.push_back(CUTE(test_UserInput_letter_and_numbers));
    s.push_back(CUTE(test_UserInput_Negative));

    // Создаем listener и runner
    ide_listener<> listener;
    makeRunner(listener)(s, "All rectangle tests");

    return 0;
}