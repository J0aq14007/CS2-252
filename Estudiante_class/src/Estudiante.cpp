#include "Estudiante.h"

Estudiante::Estudiante()
{
    std::string nombre = "Vinicius" ; int edad = 26;
}

Estudiante::~Estudiante()
{
    std::cout<<"Destruyo estudiante"<<std::endl;
}

void Estudiante::printE() const{
   std::cout<<"Estudiante: "<<nombre<<std::endl;
   std::cout<<"Edad: "<<edad<<std::endl;
}
