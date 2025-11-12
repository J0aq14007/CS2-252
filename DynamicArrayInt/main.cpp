#include <iostream>
#include "DynamicArrayInt.h"
using namespace std;

int main()
{
    DynamicArrayInt da;
    da.print();
    da.push_back(1);
    da.push_back(2);
    da.push_back(3);
    da.push_back(4);
    da.push_back(5);
    cout<<endl;
    da.print();

    if(true)
    {
      DynamicArrayInt b = da;
    }
    cout<<endl;
    da.print();

    return 0;
}
