#include <iostream>

using namespace std;

int main()
{
    /**
    * condicional if
    *
      if (condicion){

          //sentencia A. se ejecuta si es verdadero

      }else{
         //sentencia B. se ejecuta si es falso

      }

    * Operadores de comparacion
      >  -> mayor que
      <  -> menor que
      >= -> mayor igual
      <= -> menor igual
      == -> igual
      != -> diferente

    * Operadores logicos
      && and
      || or
      !  negacion
      Ejm a=10, b=5

           (a > 5) -> true
           (a < 3) -> false
           (a==8) -> false
           (a != 5) -> true
           (a >= 10 && b < 10) -> true
           (a < 6 || b == 5) -> true

    */

    int a = 10; int b = 5;
    if(a > 5){

           cout<<"El numero "<<a<<" es mayor que 5"<<endl;
    }
    if(a < 3){
           cout<<"El numero "<<a<<" es menor que 3"<<endl;
    }
    if(a==8){
           cout<<"El numero "<<a<<" es igual a 8"<<endl;

    }
    if(a != 5){
           cout<<"El numero "<<a<<" es diferente de 5"<<endl;

    }
    if( a >= 10 && b < 10){
            cout<<"Es verdad"<<endl;
    }
    if(a < 6 || b == 5){
            cout<<"Es verdad"<<endl;
    }
    if(a){
            cout<<"Es verdad"<<endl;
    }
    return 0;
}
