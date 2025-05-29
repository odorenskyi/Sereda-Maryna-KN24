#ifndef MODULESSEREDA_H_INCLUDED
#define MODULESSEREDA_H_INCLUDED

#include <cmath>

class ClassLab12_Sereda{
public:
    ClassLab12_Sereda(){}
    ClassLab12_Sereda(float radius);
    void setRadius(float radius);
    float getRadius();
    float getVolumeBall();
private:
    float radius = 0.0;
};

ClassLab12_Sereda::ClassLab12_Sereda(float radius){
    this->radius = radius;
}

void ClassLab12_Sereda::setRadius(float radius){
    this->radius = radius;
}

float ClassLab12_Sereda::getRadius(){
    return radius;
}

float ClassLab12_Sereda::getVolumeBall(){
    return (4 * M_PI * pow(radius, 3))/3;
}

#endif // MODULESSEREDA_H_INCLUDED
