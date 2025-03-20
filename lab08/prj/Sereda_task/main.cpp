#include <iostream>
#include <clocale>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <windows.h>
#include "C:\Users\Asus\Desktop\BMTP-LAB8-Sereda\prj\ModulesSereda\ModulesSereda.h"

using namespace std;

void name(){
    cout << " ----------------------------" << endl;
    cout << "|Розробник: \u00A9 Середа М. О.   |" << endl;
    cout << "|Назва ЗВО: ЦНТУ             |" << endl;
    cout << "|Рік реалізації проєкту: 2024|" << endl;
    cout << " ----------------------------" << endl;
}

int a_b(char a, char b){
    bool bool_ab = a + 5 >= b;
    cout << "a + 5 >= b -> " << boolalpha << bool_ab << endl;
}

void oct_hex(){
    int x, y, z;
    cout << "Введіть x, y і z: ";
    cin >> x >> y >> z;
    cout << "x " << dec << x << endl;
    cout << "y " << dec << y << endl;
    cout << "z " << dec << z << endl;
    cout << "x " << hex << x << endl;
    cout << "y " << hex << y << endl;
    cout << "z " << hex << z << endl;
}

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    name();

    int d, l, v;
    cout << "Введіть a і b: ";
    cin >> l >> v;
    d = a_b(l, v);

    oct_hex();

    double x, y, z, s;
    cout << "Введіть числа x, y, z: ";
    cin >> x >> y >> z;
    s = s_calculation(x, y, z);
    cout << "S = "<< s << endl;
    return 0;
}
