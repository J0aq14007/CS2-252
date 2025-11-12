#include "DynamicArrayInt.h"

DynamicArrayInt::DynamicArrayInt()
{
    this->size =0;
    this->data = new int[size];
}

DynamicArrayInt::DynamicArrayInt(int arr[], int size){

    this->size =size;
    this->data = new int[size];
    for(int i=0; i<size; i++){
        this->data[i] = arr[i];
    }
}

DynamicArrayInt::DynamicArrayInt(DynamicArrayInt &o){

    this->size = o.size;
    this->data = new int [size];
    for(int i=0; i<size; i++){
        this->data[i] = o.data[i];
    }

}

int  DynamicArrayInt::getSize()const{

    return size;
}

void DynamicArrayInt::print()const{

    std::cout<<"[ ";
    for(int i=0; i<size; i++){
        std::cout<<this->data[i]<<" ";

    }std::cout<<" ]";

}

void DynamicArrayInt::push_back(int val){
    int *tmp = new int[size+1];
    for(int i=0; i<size; i++){
        tmp[i]= this-> data[i];
    }
    tmp[size] = val;
    size++;
    delete []data;
    this->data = tmp;

}

void DynamicArrayInt::insert(int val, int pos){
    int *tmp = new int [size+1];
    for(int i=0; i<size; i++){
        tmp[i]= this->data[i];
    }
    for(int i=pos; i<size; i++){
        tmp[i+1] = this->data[i];
    }
    tmp[pos] = val;
    size++; delete[] data; this->data = tmp;
}

void DynamicArrayInt::remove(int pos){

     int *tmp = new int [size-1];
    for(int i=0; i<pos; i++){
        tmp[i]= this->data[i];
    }
    for(int i=pos; i<size; i++){
        tmp[i] = this->data[i+1];
    }

    size--; delete[] data; this->data = tmp;


}

DynamicArrayInt::~DynamicArrayInt()
{
    delete[] data;
}

