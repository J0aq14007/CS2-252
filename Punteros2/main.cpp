#include <iostream>

using namespace std;

int main()
{
    int* ptr;
    int x=10;
    ptr = &x;

    cout<<*ptr<<endl;
    *ptr = 1000;
    cout<<x<<endl;

    int *ptr1 = &x;
    *ptr1 = 5000;
    cout<<x<<endl;
    cout<<*ptr<<endl;
    cout<<*ptr1<<endl;

    double y = 2.4565;
    double*ptr2 = &y;
    cout<<*ptr2<<endl;
    *ptr2 = 3.4566;
    cout<<*ptr2<<endl;

    return 0;
}
