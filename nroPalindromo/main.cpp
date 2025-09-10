#include <iostream>
#include <cmath>
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

    /**
    ll n; std::cin>>n;
    ll numero_principal{n};
    ll numero_reverso{0};
    while(n>0){

          int d{n%10};
          numero_reverso = numero_reverso * 10 + d;
          n = n/10;

    }
       if(numero_reverso == numero_principal){
             std::cout<<"Es palindromo";
      }else{
             std::cout<<"No es palindromo";
          }
    **/

    long n; std::cin>>n;
    int numC{n}, numDigit{0};
    while(numC >0){

          numC /= 10;
          numDigit++;
    }

    while(n!=0){
      int ini{n / pow(10,numDigit-1)};
      int fin{n%10};
      if(ini != fin){
          std::cout<<"No es palindromo"; break;
      }
      n= (n% static_cast<int>(pow(10,numDigits-1)))/10;
      numDigit -=2;
    }

    return 0;
}
