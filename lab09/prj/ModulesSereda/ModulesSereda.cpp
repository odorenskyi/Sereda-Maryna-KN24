#include <iostream>
#include <cmath>
#include <cstdio>
#include <string>
#include <bitset>

using namespace std;

double s_calculation(double x, double y, double z){
    double s;
    if(z != 0 && y != 0){
        s = sqrt(abs(pow(z, 2) * (1.0/2) * y)) + ((M_PI * x + pow(M_E, abs(y))) / y);
    }
    return s;
}

string task_9_1(double s_v){

    if (s_v < 0.3)
        return "Бал Босфорта: 0. Відсутність вітру. Дим піднімається прямовисто. Листя дерев нерухомі.";
    else if (s_v > 0.3 && s_v <= 1.5)
        return "Бал Босфорта: 1. Дим 'пливе'. Флюгер не обертається.";
    else if (s_v > 1.5 && s_v <= 3.4)
        return "Бал Босфорта: 2. Рух повітря відчувається обличчям. Шелестить листя. Флюгери обертаються.";
    else if (s_v > 3.4 && s_v <= 5.4)
        return "Бал Босфорта: 3. Тріпоче листя, хитаються дрібні гілки. Майорять прапори.";
    else if (s_v > 5.4 && s_v <= 7.9)
        return "Бал Босфорта: 4. Хитаються тонкі гілки дерев. Вітер піднімає пил та шматки паперу.";
    else if (s_v > 7.9 && s_v <= 10.7)
        return "Бал Босфорта: 5. Хитаються великі гілки. На воді з'являються хвилі.";
    else if (s_v > 10.7 && s_v <= 13.8)
        return "Бал Босфорта: 6. Хитаються великі гілки.";
    else if (s_v > 13.8 && s_v <= 17.1)
        return "Бал Босфорта: 7. Хитаються невеликі стовбури дерев. На морі здіймаються хвилі, піняться.";
    else if (s_v > 17.1 && s_v <= 20.7)
        return "Бал Босфорта: 8. Ламаються гілки дерев. Важко йти проти вітру.";
    else if (s_v > 20.7 && s_v <= 24.4)
        return "Бал Босфорта: 9. Невелике руйнування. Зриває покрівлі, руйнує димарі.";
    else if (s_v > 24.4 && s_v <= 28.4)
        return "Бал Босфорта: 10. Значні руйнування. Дерева вириваються з корінням.";
    else if (s_v > 28.4 && s_v <= 32.6)
        return "Бал Босфорта: 11. Великі руйнування.";
    else if (s_v > 32.6)
        return "Бал Босфорта: 12. Призводить до спустошень.";
}

double january_ce(int a[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += a[i];
    }
    double ce = sum / size;
    return ce;
}

double january_f(double ce_1){
    double f_1 = 32 + (1.8 * ce_1);
    return f_1;
}


int countBits(unsigned int N) {
    bitset<24> binaryN(N);

    if (binaryN[14]) {
        return 24 - binaryN.count();
    } else {
        return binaryN.count();
    }
}
