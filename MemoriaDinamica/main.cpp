#include <iostream>
using namespace std;


/**
  Operador new
    sirve para reservar memoria para una variable/objeto

  Operador delete
    sirve para liberar memoria de una variable/objeto

*/
int *fun(){

     int *ptr = new int;
     int *ptr{10};
     return ptr;
}



int main()
{
    int *ptr = fun();
    cout<<*ptr<<endl;

    /**
    int*ptr;
    if(true){
        int x = 10;
        ptr = &x;
    }
    cout<<*ptr<<endl;
    return 0;
    */
}
