#include <iostream>

using namespace std;

/**
   El nombre de un arreglo es un puntero al primer elemento del arreglo

   ARITMETICA DE PUNTEROS
   ======================
   A los punteros se les puede incrementar/decrementar usando los
   operadores ( + , - )

   */
int main()
{
    int arr[] = {1,2,3,4,5};

    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl;

    int* ptr = arr;
    cout<<*ptr<<endl;
    ptr++;
      cout<<*ptr<<endl;
    ptr++;
      cout<<*ptr<<endl;
    ptr++;
      cout<<*ptr<<endl;
    ptr++;
      cout<<*ptr<<endl;
    //Por lo tanto, se puede recorrer los elementos de un arreglo usando un puntero


    int *ptr1 = arr;
    for(int i{0}; i<5; i++){
        cout<<*ptr1<<" ";
        ptr1++;

    }cout<<endl;


    return 0;
}
