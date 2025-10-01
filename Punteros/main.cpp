#include <iostream>

using namespace std;

int main()
{
   /**
      Punteros
      ========
      Variable que almacena -direccion de memoria- de otra variable del mismo tipo

      Declaracion de puntero
           TIPO DE DATO * NOMBRE_DEL_PUNTERO

      OPERADOR DE DIRECCION (&)
           Sirve para obtener la direccion de memoria de una variable

      OPERADOR DE INDIRECCION (*)
           Sirve para obtener el valor de una direccion de memoria de una variable

   */

    int* ptr;
    int x; //declarando variable x
    x = 10; //inicializando variable x con valor de 10

    ptr = &x;

    cout<<"Direccion de la variable x es: "<<&x<<endl;
    cout<<"Valor de variable x es: "<<x<<endl;
    cout<<"Direccion de la variable es: "<<ptr<<endl;
    cout<<"Valor de la variable es: "<<*ptr<<endl;

    int y=20;
    ptr = &y;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    int z = 100;
    ptr = &z;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    int* ptr1;
    ptr1 = &z;

    if(ptr == ptr1) cout<<"ptr y ptr1 tienen el mismo valor"<<endl;
    cout<<ptr1<<endl;

    return 0;
}
