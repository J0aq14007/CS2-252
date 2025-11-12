#include <iostream>
#include "DynamicIntegerArray.h"
using namespace std;

int main()
{
    DynamicIntegerArray curr;
    cout<<curr.getSize()<<endl;

    int arr[] = {1,2,4,5,6,7};
    DynamicIntegerArray curr1(arr, 5);
    cout<<curr1.getSize()<<endl;
    curr1.print();
    cout<<endl;

    curr1.push_back(10);
    curr1.print();
    cout<<endl;

    curr1.insert(100,3);
    curr1.print();
    cout<<endl;

    curr1.remove(1);
    curr1.print();
    cout<<endl;

    return 0;
}
