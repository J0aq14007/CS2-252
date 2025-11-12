#include "DynamicPointArray.h"
#include <iostream>

DynamicPointArray::DynamicPointArray()
{
    x=0; y=0;
}

DynamicPointArray::DynamicPointArray(int _x, int _y)
{
    x = _x; y= _y;
}

void DynamicPointArray::print() const{

    std::cout<<"( "<<x<<", "<<y<<" ) "<<std::endl;
}
void DynamicPointArray::setPoint(int _x, int _y){

    x = _x; y= _y;
}
DynamicPointArray::~DynamicPointArray()
{
    //dtor
}
