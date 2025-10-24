#include <iostream>

using namespace std;

int main()
{
    Punto p1;
    Punto p2(4,6);
    VectorGeometrico vg(p1,p2);
    vg.print();
    vg.modulo();

    return 0;
}
