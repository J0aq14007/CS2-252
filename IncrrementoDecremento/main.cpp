#include <iostream>

using namespace std;

int main()
{
    int c{10};
    int d{10};

    int a{++c}, b{d++};

    cout<<a<<endl;
    cout<<c<<endl;

    cout<<b<<endl;
    cout<<d<<endl;


    return 0;
}
