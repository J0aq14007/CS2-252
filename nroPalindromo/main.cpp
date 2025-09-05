#include <iostream>
using ll = long long;
//using namespace std;

int main()
{
    /**
     Escribir un programa que pida un numero (3-9 digitos)
     y evalue si dicho numero es palindromo

     Ejm       13331 -> palindromo
               2134566 -> no es palindromo
               31311313 -> palindromo

               for
    **/

    ll n; std::cin>>n;
    ll numero_principal{n};
    ll numero_reverso{0};
    while(n>=0){

          int d{n%10};
          numero_reverso = numero_reverso * 10 + d;
          n = n/10;

          if(numero_reverso == numero_principal){
             std::cout<<"Es palindromo";
          }else{
             std::cout<<"No es palindromo";
          }

    }
     7777
     77
    return 0;
}
