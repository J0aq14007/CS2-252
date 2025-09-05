#include <iostream>

//using namespace std;

int main()
{
    /**

       ***PRIMOS***
       2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
       31, 37, 41, 43, 47, 53, 59, 61, 67, 71,
       73, 79, 83, 89, 97, 101, 103, 107, 109, 113,
       127, 131, 137, 139, 149, 151, 157, 163, 167, 173,
       179, 181, 191, 193, 197, 199, 211, 223, 227, 229,
       233, 239, 241, 251, 257, 263, 269, 271, 277, 281,
       283, 293, 307, 311, 313, 317, 331, 337, 347, 349,
       353, 359, 367, 373, 379, 383, 389, 397, 401, 409,
       419, 421, 431, 433, 439, 443, 449, 457, 461, 463,
       467, 479, 487, 491, 499, 503, 509, 521, 523, 541

    */
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

      int num; std::cin>>num;
      int k{2};
      while(num>k){

            int j{1};
            int divisores{0};
            while(j<=k){

               if(k%j == 0){
                divisores+=1;

               }j+=1;
            }

             if(divisores==2){

                std::cout<<k<<" ";
            }
            k+=1;
      }


    return 0;
}
