#include <iostream>
using namespace std;

int main()
{
    char val;
    cout<<"Ingresa un caracter por favor: "<<endl;
    cin>> val;

    cout<<"El valor de la variable es: "<<val<<endl;
    int num = static_cast<int>(val);
    cout<<"El valor numerico es:"<<num<<endl;

    /**
    Escribir un programa que indique si el valor ingresado es una letra mayuscula
    */

    if(num >=65 ||num <=90){
         cout<<"Es una letra mayuscula"<<endl;
    }else{
         cout<<"No es una letra mayuscula"<<endl;"
    }


    /**
    Escribir un programa que indique si el valor ingresado es una letra mayuscula o letra minuscula
    */

    if(num >=65 && num <=90 || num >= 97 && num <= 122){
          cout<<"Es una letra "<<endl;
    }else {
          cout<<"No es una letra "<<endl;
    }

     /**
    Escribir un programa que indique si el valor ingresado es un numero
    */

    if(num >=48 && num <=57 ){
          cout<<"Es un numero "<<endl;
    }else {
          cout<<"No es un numero "<<endl;
    }
    return 0;
}
