#ifndef LR5_PART2_H
#define LR5_PART2_H


#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <functional>
#include <numeric>
#include <limits>
#include <cmath>
#include <ctime>
using namespace std;

bool UserInput (const string& input)
{
    if (input.empty()){
        return false;
    }

    for (char ch : input)
    {
        if (!isdigit(ch)){return false;}
    }

    try {
        int number = stoi(input);
        if (number < 1){return false;}
    }
    catch (...) 
    {return false;}

    return true;
}

void EnterDigit(int& varLink, const string& label) {
    string raw_input;

    cout << label << " = ";
    getline(cin, raw_input);

    while (!UserInput(raw_input) || stoi(raw_input) < 1) {
        cout << "Некорректный ввод. Повторите.\n";
        cout << label << " = ";
        getline(cin, raw_input);
    }

    varLink = stoi(raw_input);
}



// void InputQ (int q){
//     EnterDigit(q, "Введите Q: ");
//     cout << "Q: " << q << endl;
// }

// void InputP (int p){
//     EnterDigit (p, "Введите P: ");
//     cout << "P: " << p << endl;
// }

int modQonP (int q, int p){
    int mod;
    mod = q % p;
    return mod;
    // cout << "Остаток от деления " << q << " на " << p << " = " << mod << endl;
    
}

int divQonP (int q, int p){
    int div;
    div = q / p;
    return div;
    // cout << "Целая часть от деления " << q << " на " << p << " = " << div << endl;

}



#endif