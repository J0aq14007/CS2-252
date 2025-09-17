#include <iostream>

using namespace std;

void intercambiar_valores(int &a, int &b){

    int temp = a;
    if(a != b){

       a = b;
       b = temp;

    }

}


int main()
{
    /***
    string cad1= "Reconocer";

    int tam = cad1.length();

    for(int i=0; i<tam/2; i++){

        if(cad1[i] != cad1[tam -1-i]){
            cout<<"No es palindromo";
            break;
        }else{
            cout<<"Es palindromo";
        }
    }
    ***/
    int x{10}, y{20};
    cout<<x<<" "<<y<<endl;
    intercambiar_valores(x,y);
    cout<<x<<" "<<y;


    return 0;
}
