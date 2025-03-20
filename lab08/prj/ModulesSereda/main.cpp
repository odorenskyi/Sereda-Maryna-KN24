#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

double s_calculation(double x, double y, double z){
    double s;
    if(z != 0 && y != 0){
        s = sqrt(abs(pow(z, 2) * (1.0/2) * y)) + ((M_PI * x + pow(M_E, abs(y))) / y);
    }
    return s;
}
