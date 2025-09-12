#include <iostream>

using namespace std;

bool Esprimo(int a){

     int div{0};
     for(int i{2}; i*i<=a; i++){

         if(a % i ==0){ div++; break;}
     }
     if(div>0){

         return false;
     }else{
         return true;
     }
}

void ImprimirPrimos(int a){

     for(int i{2}; i<a; i++){
        if(Esprimo(i)) {
          cout<<i<<" ";
        }else{
          cout<<"ESTO NO DEBIO PASARRR :B"; break;
        }
    }
    cout<<endl;
}

/**
   Implemente una funcion que reciba un entero y retorne
   el numero de digitos que tiene dicho entero
*/

int NroDigitos(int n){

    int digit{0};

    if(n==0) return 1;
    for( ;n>0; n/=10 ){
        digit++;
    }
    return digit;
}

int main()
 {
    /////////////////////////////
    int a; cin>>a;

    if(Esprimo(a)){
        cout<<"Es primo"<<endl;
    }else{
        cout<<"No es primo"<<endl;
    }

    ImprimirPrimos(a);
    /////////////////////////////

    int n; cin>>n;
    cout<<NroDigitos(n)<<endl;

    return 0;
}
