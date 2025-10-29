#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
    Point p1;
    cout<<endl;
    p1.print();
    cout<<endl;


    Point* p2 = new Point ;
    cout<<endl;
    p2->print();
    (*p2).print();
    cout<<endl;

    Point p3(4,5);
    cout<<endl;
    p3.print();
    cout<<endl;

    Point *p4 = new Point(2,7);
    cout<<endl;
    p4->print();
    (*p4).print();
    cout<<endl;

    delete p2;
    delete p4;
    return 0;
}
