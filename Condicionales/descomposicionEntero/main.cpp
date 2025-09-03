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
    int result1 = a%10;
    int result2 = a/10;

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

       cout<<"Ingrese un numero"<<endl;
       int n; cin>>n;  //declarando
       int m = n / 1000;
       int c = (n%1000)/100;
       int d = (n%100) /10;
       int u = n% 10;

       cout<<"El numero ingresado descompuesto es asi: ";
       cout<<m<<endl;
       cout<<c<<endl;
       cout<<d<<endl;
       cout<<u<<endl;
    return 0;
}
