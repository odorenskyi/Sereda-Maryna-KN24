#include <iostream>
#include <cmath>
#include <cstdio>
#include <fstream>
#include <string>
#include <ctime>
#include "ModulesSereda.h"

using namespace std;

int main(){
    string name_1 = name();
    string fileContent = file(name_1);
    string inf = developer ();
    string td = bykvu(fileContent);
    string pt = processText(fileContent);
    outputFile(inf, td, pt);
    string tw = ten_two(fileContent);
    appendToFile_ttt(tw, name_1);
    double x = 0, y = 0, z = 0;
    cout << "Введіть x: ";
    cin >> x;
    cout << "Введіть y: ";
    cin >> y;
    cout << "Введіть z: ";
    cin >> z;
    double s = s_calculation(x, y, z);
    string result = to_string(s);
    appendToFile(result);
    int b = 0;
    cout << "Введіть b: ";
    cin >> b;
    string ba = printBinary(b);
    appendToFile(ba);
    return 0;
}
