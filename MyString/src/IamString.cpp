#include "IamString.h"

IamString::IamString(char *arr)
{
    int cont;
    for(int i=0; arr[i] != '\0';i++ ){
        cont++;
    }
    this-> size = count;
    this-> data = new char[count+1];
    for(int i=0; arr[i] != '\0';i++ ){
        this->data[i] = arr[i];
    }
    this->data[size] = '\0';
}
int IamString::getSize()const {

    return size;
}

char* IamString::getData() const{
    return this -> data;
}

void IamString::ToUpper(){

    for(int i=0; i<size; i++){
        if(data[i] >= 97 && data[i] <= 122){
            data[i] -= 32;
        }
    }
}

void IamString::ToLower(){

     for(int i=0; i<size; i++){
        if(data[i] >= 65 && data[i] <= 90){
            data[i] += 32;
        }
    }
}

IamString::~IamString()
{
   delete data[];
}
