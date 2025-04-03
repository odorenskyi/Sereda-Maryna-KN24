#include <iomanip>
#include <locale>
#include <windows.h>
#include <iostream>
#include <string>
#include "C:\Users\SeredaBMTP\Desktop\BMTP_9\prj\ModulesSereda\ModulesSereda.h"

using namespace std;

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    double x;

    cout << "Введіть силу вітру (м/сек): ";
    cin >> x;

    string s;
    s = task_9_1(x);
    cout << s << endl;

    /////////////////////////////////////////////////////

    int const SIZE = 31;
    int c = 0;
    int january_1[SIZE];
    cout << "Введіть температуру за Цельсією в січні." << endl;
    for (int i = 0; i < SIZE; i++){
        cout << i + 1 << " день січня: ";
        cin >> c;
        january_1[i] = c;
    }
    double ce_2;
    ce_2 = january_ce(january_1, SIZE);
    cout << "Середня температура в січні в Цельсіях: " << ce_2 << " ℃." << endl;
    double f_2 = january_f(ce_2);
    cout << "Середня температура в січні в Фарангейтах : " << f_2 << " ℉." << endl;

    /////////////////////////////////////////////////////

    unsigned int N;
    cout << "Введите число N (0 <= N <= 10008000): ";
    cin >> N;
    int result = countBits(N);
    cout << "Результат: " << result << endl;

    return 0;
}
