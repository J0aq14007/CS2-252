#include <iostream>

//using namespace std;

int main()
{
    /**
    *  break rompe el bucle
    */
    int i{1};
    std::cout<<"Probando sentencia break"<<std::endl;

    while(i<10){
        if(i==5){ break; }
        std::cout<<i<<std::endl;
        i++;
    }


    /**
    * continue: salta la sgte iteracion
    */
    int{0};
    std::cout<<"Probando sentencia continue"<<std::endl;

    while(i<10){
          i++;
          if(i==5){ continue; }
          std::cout<<i<<std::endl;
    }

    return 0;
}
