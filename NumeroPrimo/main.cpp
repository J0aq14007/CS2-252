#include <iostream>

//using namespace std;

int main()
{
    /**

      Implemente un programa que solitcite un numero por teclado
      e indique si el nro es un nro primo.

    */
      int n; std::cin>>n;
      int j{0};
      int i{1};
      while(n>i){

            if(n%i == 0){
               j+=1;

            }
            i+=1;
      }
      if(j==2){

            std::cout<<"Es primo"<<std::endl;
      }else{
            std::cout<<"No es primo"<<std::endl;
      }

    /**

      Implemente un programa que solicite un numero por teclado
      e imprima los numeros primos menores de dicho numero

    */

      int num; cin>>num;
      int i{1};
      while(n>i){


            if(n%i == 0){
               j+=1;

            }
            i+=1;
      }
      while(j>=num){

           std::cout<<j<<std::endl;
      }

    return 0;
}
