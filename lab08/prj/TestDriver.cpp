#include <iomanip>
#include <locale>
#include <windows.h>
#include <iostream>
#include "C:\Users\Asus\Desktop\BMTP-LAB8-Sereda\prj\ModulesSereda\ModulesSereda.h"

using namespace std;

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    double x, y, z, s;

    cout << "Введіть числа x, y, z: ";
    cin >> x >> y >> z;

    s = s_calculation(x, y, z);
    cout << "S = "<< s << endl;
    return 0;
}
