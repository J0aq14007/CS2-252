#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <iostream>

class Estudiante
{
    public:
        Estudiante();
        void printE() const;

        ~Estudiante();

    private:
        std::string nombre; int edad;
};

#endif // ESTUDIANTE_H
