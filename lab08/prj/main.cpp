#include <iostream>
#include <cmath>
#include <cstdio>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

double s_calculation(double x, double y, double z){
    double s;
    if(z != 0 && y != 0){
        s = sqrt(abs(pow(z, 2) * (1.0/2) * y)) + ((M_PI * x + pow(M_E, abs(y))) / y);
    }
    return s;
}

string name(){
    string inputFilename;
    cout << "Введіть ім'я файлу, який ви хочете відкрити: ";
    cin >> inputFilename;
    return inputFilename;
}

string file(string inputFilename){
    ifstream inputFile(inputFilename);
    string fileContent;

    if (inputFile.is_open()) {
        string line;
        while (getline(inputFile, line)) {
            fileContent += line;
        }
        inputFile.close();
    }
    else {
        cerr << "Помилка відкриття файлу \"" << inputFilename << "\". Перевірте, чи існує файл.\n";
    }
    return fileContent;
}

string processText(const string fileContent) {
    int letterCount = 0;
    for (char c : fileContent) {
        if (isalpha(static_cast<unsigned char>(c))) {
            letterCount++;
        }
    }
    string virsh_1 = "\nВ хаті сонячній промінь косо\n"
               "На долівку ляга з вікна...\n"
               "Твої чорні шовкові коси\n"
               "Припорошила вже сивина.";
    string virsh_2 = "\nКоли малим ти перший став на ноги\n"
               "Яка ж то радість матері була!\n"
               "Від тихої колиски до порога\n"
               "Вона тебе за руку провела.";
    if (letterCount % 2 == 0) {
        return virsh_1;
    } else {
        return virsh_2;
    }
}

void outputFile(string outputText_1, string outputText_2, string outputText_3){
    string outputFilename = "result.txt";
    ofstream outputFile(outputFilename);

    if (outputFile.is_open()) {
        outputFile << outputText_1 << outputText_2 << outputText_3 << endl;
        cout << "Результат записано у файл \"" << outputFilename << "\".\n";
        outputFile.close();
    } else {
        cerr << "Помилка створення або відкриття файлу \"" << outputFilename << "\" для запису.\n";
    }
}

string bykvu(string text){
    for (char &c : text){
        if (c == 'к' || c == 'т' || c == 'У' || c == 'л' || c == 'й'){
            c = '?';
        }
    }
    return text;
}

string developer (){
    string inf = "\t\t\t\t\t\t ----------------------------\n"
                 "\t\t\t\t\t\t|Розробник: \u00A9 Середа М. О.   |\n"
                 "\t\t\t\t\t\t|Назва ЗВО: ЦНТУ             |\n"
                 "\t\t\t\t\t\t|Місто: Кропивницький        |\n"
                 "\t\t\t\t\t\t|Країна: Україна             |\n"
                 "\t\t\t\t\t\t|Рік реалізації проєкту: 2025|\n"
                 "\t\t\t\t\t\t ----------------------------\n";
    return inf;
}

string ten_two(string fileContent) {
    string lettersOnly;
    string result;

    for (char c : fileContent) {
        if (isalpha(static_cast<unsigned char>(c))) {
            lettersOnly += c;
        }
    }

    for (size_t i = 1; i < lettersOnly.length(); i += 2) { //lettersOnly.length() - довжина рядка/кільсть літер
        result += lettersOnly[i];
    }

    time_t now = time(0);
    tm* localtm = localtime(&now);
    string timeString = asctime(localtm);

    if (!timeString.empty() && timeString.back() == '\n') {
        timeString.pop_back();
    }

    return "\nНепарні літери: " + result + "\nЧас і дата: " + timeString;
}

string printBinary(int b) {
    string result;
    for (int i = 7; i >= 0; --i) {
        result += ((b >> i) & 1) ? '1' : '0';
    }
    return result;
}

void appendToFile(const string text) {
    ofstream file("result.txt", ios::app);

    if (file.is_open()) {
        file << text << endl;
        file.close();
    } else {
        cerr << "Не вдалося відкрити файл для запису!" << endl;
    }
}

void appendToFile_ttt(const string text, string file_1) {
    ofstream file(file_1, ios::app);

    if (file.is_open()) {
        file << text << endl;
        file.close();
    } else {
        cerr << "Не вдалося відкрити файл для запису!" << endl;
    }
}
