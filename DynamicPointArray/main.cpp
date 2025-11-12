#include <iostream>
#include "DynamicPointArray.h"
using namespace std;

int main()
{
    DynamicPointArray p1;
    DynamicPointArray p2 (4,5);
    DynamicPointArray p3 (7,6);

    DynamicPointArray arr[3] = {p1,p2,p3};
    for(int i=0; i<3; i++){

        arr[i].print();
    }

    return 0;
}
