#include <iostream>
#include <cmath>

using namespace std;

class Punto{
  public:
      int x, y;
      void print(){
           cout<<"("<<x<<", "<<y<<")"<<endl;
      }
      void modificar(int _x, int _y){
           x = _x; y = _y;
      }

};

float distancia(Punto p1, Punto p2){

      return sqrt(pow((p1.x - p2.x),2)+ pow((p1.y - p2.y),2) );
}

int main()
{
    Punto p1;
    p1.x = 0; p1.y = 0;
    p1.print();

    Punto p2;
    p2.x = 3; p2.y = 4;
    p2.print();

    cout<< distancia(p1,p2)<<endl;

    p1.modificar(1,1); p2.modificar(5,5);

    cout<< distancia(p1,p2)<<endl;
    return 0;
}
