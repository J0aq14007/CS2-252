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
    **/
    return 0;
}
