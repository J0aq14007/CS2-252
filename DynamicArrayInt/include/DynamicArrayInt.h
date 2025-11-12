#ifndef DYNAMICARRAYINT_H
#define DYNAMICARRAYINT_H
#include <iostream>

class DynamicArrayInt
{
    public:
        DynamicArrayInt();
        DynamicArrayInt(int arr[], int size);
        DynamicArrayInt(DynamicArrayInt &o);

        int getSize() const;
        void print() const;

        void push_back(int val);
        void insert(int val, int pos);
        void remove(int pos);

         ~DynamicArrayInt();

    private:

        int*data; int size;
};

#endif // DYNAMICARRAYINT_H
