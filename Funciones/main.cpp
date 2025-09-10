#include <iostream>

//using namespace std;

int potencia(int base, int exponente){

    int result{1};
    //inicializacion ; condicion; incremento
    for(int i{0}; i<exponente  ;i++){

        result*=base;

    }return result;
}
int main()
{
    std::cout<<potencia(2,3);
    return 0;
}
