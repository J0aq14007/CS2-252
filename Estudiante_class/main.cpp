#include <iostream>
#include "Estudiante.h"
using namespace std;

int main()
{
    /** Clase estudiante con nombre y edad*/
    Estudiante* e1 = new Estudiante ;
    cout<<endl;
    e1->printE();
    (*e1).printE();
    cout<<endl;

    delete e1;
    return 0;
}
