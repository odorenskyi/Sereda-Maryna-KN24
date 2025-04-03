#include <iostream>
#include <string>
#include <bitset>
#include "C:\Users\SeredaBMTP\Desktop\BMTP_9\prj\ModulesSereda\ModulesSereda.h"

using namespace std;

int main() {
    char user = 0;

    cout << "\t\t\t\t\t\t ----------------------------" << endl;
    cout << "\t\t\t\t\t\t|Розробник: \u00A9 Середа М. О.   |" << endl;
    cout << "\t\t\t\t\t\t|Назва ЗВО: ЦНТУ             |" << endl;
    cout << "\t\t\t\t\t\t|Рік реалізації проєкту: 2025|" << endl;
    cout << "\t\t\t\t\t\t ----------------------------" << endl;

    cout << " -----------------------------------------------------------------------------" << endl;
    cout << "|                              Програма / функції                             |" << endl;
    cout << "|# 3 - Функція приймає натуральне число N (0 ≤ N ≤ 10008000), переводить його |"
    "\n|  в двійковий формат і перевіряє значення 14-го біта (нумерація з 0).        |" << endl;
    cout << "|# 4 - середня температура в січні за Цельсіями і Фарангейтами.               |" << endl;
    cout << "|# 5 - визначення балу Бофорта і дія вітру в залежності щвидкості вітру м/сек.|" << endl;
    cout << "|# 7 - обчислення функції.                                                    |" << endl;
    cout << "|При введенні \"t\", \"T\" і \"C\" відбувається вихід з програми.                   |" << endl;
    cout << " -----------------------------------------------------------------------------" << endl;

    while (true) {
        cout << "Введіть номер функції: ";
        cin >> user;

        switch (user) {
            case '3':{
                unsigned int N;
                cout << "Введите число N (0 <= N <= 10008000): ";
                cin >> N;
                int result = countBits(N);
                cout << "Результат: " << result << endl;
                break;
            }
            case '4': {
                const int SIZE = 31;
                int january_1[SIZE];

                cout << "Введіть температуру за Цельсієм у січні." << endl;
                for (int i = 0; i < SIZE; i++) {
                    cout << i + 1 << " день січня: ";
                    cin >> january_1[i];
                }

                double ce_2 = january_ce(january_1, SIZE);
                cout << "Середня температура в січні: " << ce_2 << " ℃" << endl;

                double f_2 = january_f(ce_2);
                cout << "У Фаренгейтах: " << f_2 << " ℉" << endl;
                break;
            }

            case '5': {
                double x;
                cout << "Введіть силу вітру (м/с): ";
                cin >> x;

                string s = task_9_1(x);
                cout << "Результат: " << s << endl;
                break;
            }

            case '7': {
                double x, y, z;
                cout << "Введіть числа x, y, z: ";
                cin >> x >> y >> z;

                double s = s_calculation(x, y, z);
                cout << "S = " << s << endl;
                break;
            }

            case 't': case 'T': case 'C':
                cout << "Вихід з програми." << endl;
                return 0;

            default:
                cout << "\aНевірний ввід!" << endl;
        }
    }
    return 0;
}

