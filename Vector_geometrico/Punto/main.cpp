#include <iostream>
#include <cmath>
using namespace std;

class Punto{
  private:
      int x,y;
  public:
      Punto(){
           x=0; y=0;
      }
      Punto(int _x, int _y){
            x = _x; y = _y;
      }
      int getx() const{
          return x;
      }
      int gety() const{
          return y;
      }
      void print(){
           cout<<"("<<x<<", "<<y<<")"<<endl;
      }
      void modificar(int _x, int _y){
           x = _x; y = _y;
      }

};

class VectorGeometrico{
      Punto ini; Punto fin;
  public:
      VectorGeometrico(Punto p1, Punto p2){
            ini = p1; ini = p2;
      }
      void print(){
           ini.print();
           cout<<" -> ";
           fin.print();
      }
      float modulo(){
           return sqrt(pow(fin.getx()- ini.getx(), 2) + pow(fin.gety() - ini.gety(), 2));
      }

};


int main()
{

    Punto p1; Punto p2(3,4);
    VectorGeometrico vg(p1, p2);
    vg.print();
    vg.modulo();
    return 0;
}
