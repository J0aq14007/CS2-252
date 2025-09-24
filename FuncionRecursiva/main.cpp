#include <iostream>
using ll = long long;
using namespace std;

/**

   Recursividad: Cuando una funcion se llama a si misma.

   **Factorial

     n! = n * (n-1)!
     5! = 5 * 4!
              4 * 3!
                  3 * 2!
                      2 * 1!
*/
ll factorial(long n){

   if(n==1) return 1;
   else
      return n * factorial(n-1);

}

/**
   **Fibonacci
   fib(n) = fib(n-1) + fib(n-2)

       ииииииииииииииииииии
   <<< 1 1 2 3 5 8 13 .... >>>
       ииииииииииииииииииии
*/

ll fibonacci(long n){

   if( n <= 1) return n;
   else return fibonacci(n-1) + fibonacci(n-2);
}

/**
  Contador de digitos Recursivo

  n = 5678
  4


*/
ll ContarDigitos(long n){
   if(n==0) return 0;
   else return 1 + ContarDigitos(n/10);

}

/**
   Numero capicua

   n = 445544
   Es capicua

**
ll Capicua(long n){

  if(n<10) return "Es capicua";
  else
     return Capicua(n/10, n * 10 + n % 10);

     454
     4 5 4 == 4 5 4
     454 / 10 = 45, 454*10 = 4540 + 4
     4114
}

**/
int main()
{
    /**
    cout<<factorial(8)<<endl;
    cout<<fibonacci(6)<<endl;

    cout<<ContarDigitos(222000444);
    */
    //cout<<Capicua(232)<<endl;
    return 0;
}
