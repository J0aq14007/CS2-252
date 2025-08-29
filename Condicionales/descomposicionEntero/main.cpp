#include <iostream>

using namespace std;

int main()
{
    int a = 102;
    /**
       suma
       resta
       mult
       div
       modulo
    */
    int result1 = val%10;
    int result2 = val/10;

    /**
       Implementa un programa que reciba por teclado un numero de 4 digitos
       e imprima el numero en forma vertical

       EJM.
         3256
         3
         2
         5
         6
    */

       int n; cin>>n;
       int m = n / 1000;
       int c = (n%1000)/100;
       int d = ((n%1000) % 100 ) /10;
       int u = ((n%1000)  %100) % 10;

       cout<<m<<endl;
       cout<<c<<endl;
       cout<<d<<endl;
       cout<<u<<endl;
    return 0;
}
