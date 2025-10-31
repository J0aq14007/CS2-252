#include <iostream>
#include "IntegerArray.h"
using namespace std;

int main()
{
    IntegerArray ia(3);
    ia.setData(10,0);
    ia.setData(12,1);
    ia.setData(42,3);
    ia.print();
    return 0;
}
