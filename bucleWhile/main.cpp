#include <iostream>

//using namespace std;

int main()
{

    /**
       BUCLE WHILE
            while(condicion){

                  instruccion 1
                  instruccion 2
                  .....
                  instrucciones
            }
    */

    /*
    int i{1};
    while(i<=10){

         std::cout<<i<<std::endl;
         i+=1;
    }

    while(i<10){

         std::cout<<i<<std::endl;
         i+=1;
    }

    //imprimir del 10 al 1
    int j{10};
    while(i >= 1){

         std::cout<<i<<std::endl;
         i-=1;
    }
     */

    //imprimir multiplos de 3
    int k{1};
    while(k < 100){

         if(k%3==0){
            std::cout<<k<<" ";
            k+=1;
         }
    }

    return 0;
}
