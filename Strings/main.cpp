#include <iostream>

using namespace std;

int main()
{
    string cad = "Ciencia de la computacion";

    char a{'a'};
    string b = "a";

    cout<<cad.at(5)<<endl;
    cout<<cad.at(8)<<endl;

    /**
      char fin de cadena -> '\0'
    **/

    int c{0};
    while(cad.at(c) != '\0'){
          c++;
    }
    cout<<c<<endl;

    /*
      contar la cantidad de 'i'
      .at -> acceder a una letra
    **/
    char x; cin>>x;
    int con{0};
    for(int i=0; i<cad.length(); i++){
        if(cad.at(i)== x){
            con++;
        }
    }cout<<con<<endl;

    /**
      ingresar una cadena y verificar si es un palindromo
    */
    string cad1= "Reconocer";

    int mid = cad1.length()/2;
    int tam = cad1.length();

    for(int i=0; i<mid; i++){

        if(cad1[i] != cad1[tam -1-i]){
            cout<<"No es palindromo";
        }else{
            cout<<"Es palindromo";
        }
    }



    return 0;
}
