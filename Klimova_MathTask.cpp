#include <iostream>
#include "Klimova_MathTask.h"

using namespace std;
int EnterDigit(const string &message) {
    cout<<message<<endl;
    int nig;
    cin>>nig;
    return nig;

}

// Функция ввода натурального числа


// Функция подсчета количества цифр
int CountDigits(int number) {
    int count = 0;
    while (number > 0) {
        count++;
        number /= 10;
    }
    return count;
}

// Функция произведения последних N цифр числа
int ProductOfLastNDigits(int number, int n) {
    int product = 1;
    for (int i = 0; i < n; ++i) {
        product *= number % 10;
        number /= 10;
    }
    return product;
}

// int main() {
//     int x = 0;

//     x = EnterDigit("Введите натуральное число X: ");
//     cout << "X: " << x << endl;

//     int digitCount = CountDigits(x);
//     cout << "Количество цифр в числе X: " << digitCount << endl;
//     int n = CountDigits(x);
//     while(n>=digitCount){
//         n = EnterDigit("Введите цифру N (меньше количества цифр в X): ");
        
//     }
    

//     cout << "N: " << n << endl;

//     int product = ProductOfLastNDigits(x, n);
//     cout << "Произведение последних " << n << " цифр числа X: " << product << endl;

//     return 0;
// }
