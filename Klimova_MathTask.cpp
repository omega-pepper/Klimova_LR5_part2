#include <iostream>
#include "Klimova_MathTask.h"

using namespace std;

int main ()
{
    int q = 0, p = 0;

    EnterDigit(q, "Введите Q: ");
    cout << "Q: " << q << endl;

    EnterDigit(p, "Введите P: ");
    cout << "P: " << p << endl;

    // найти остаток от деления Q на P
    int mod = modQonP(q, p);
    cout << "Остаток от деления " << q << " на " << p << " = " << mod << endl;

    // - найти целую часть от деления Q на P
    int div = divQonP (q, p);
    cout << "Целая часть от деления " << q << " на " << p << " = " << div << endl;

    // EnterDigit(length, "Введите длину прямоугольника: ");

    // EnterDigit(width, "Введите ширину прямоугольника: ");

    // int area = Area(length, width);

    // cout << "Площадь прямоугольника: " << area << endl;
    return 0;
}