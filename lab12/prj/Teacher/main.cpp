#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cmath>
#include "ModulesSereda.h"

using namespace std;

int main()
{
    string filePath = __FILE__;
    bool incorrectLocation = filePath.find("\\lab12\\prj") == string::npos;

    ofstream outfile("test_results.txt");

    if (incorrectLocation) {
        if (outfile) {
            for (int i = 0; i < 100; ++i) {
                cout << '\a';
            }
            outfile << "Встановлені вимоги порядку виконання лабораторної роботи порушено!";
            outfile.close();
        } else {
            cerr << "Помилка, файл не може бути відкритий для письма!" << endl;
        }
        return 1;
    }

    if (!outfile) {
        cerr << "Не вдалося відкрити файл для запису." << endl;
        return 1;
    }

    int testCount;
    cout << "Скільки тест-кейсів ви хочете виконати? ";
    cin >> testCount;

    outfile << fixed << setprecision(5);

    for (int i = 0; i < testCount; ++i) {
        float inputRadius, expectedVolume;
        cout << "\nТест #" << i + 1 << endl;
        cout << "Введіть радіус кулі: ";
        cin >> inputRadius;
        cout << "Введіть очікуваний об'єм кулі: ";
        cin >> expectedVolume;

        ClassLab12_Sereda ball(inputRadius);
        float computedVolume = ball.getVolumeBall();

        outfile << "Тест #" << i + 1 << ":\n";
        outfile << "Радіус: " << inputRadius << "\n";
        outfile << "Очікуваний об'єм: " << expectedVolume << "\n";
        outfile << "Обчислений об'єм: " << computedVolume << "\n";
        outfile << "Результат тестування: "
                << (fabs(computedVolume - expectedVolume) < 0.0001 ? "Passed" : "Failed") << "\n\n";
    }

    outfile.close();
    cout << "\nУсі результати тестування збережено у файл test_results.txt\n";

    return 0;
}
