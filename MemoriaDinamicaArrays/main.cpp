#include <iostream>

using namespace std;

int sum_arr(int *ptr){

     int sum=0;
     for(int i=0; i<5; i++){
         sum+=ptr[i];

     }return sum;

}

int sum_arr_rec(int *ptr, int tam){

    if(tam == 0){
       return 0;
    }else{
       return *ptr + sum_arr_rec(ptr+1, tam-1);
    }
}

/**
   Implementar un algoritmo de ordenamiento Bubble
*/

void swap(int *a, int *b){
     int tmp = *a;
     *a = *b;
     *b = tmp;

}

int bubble(int *ptr, int tam){

    for(int i=0; i<tam-1; i++){
        for(int j=0; j<tam-i-1; j++){
            if(ptr[j] > ptr[j+1]){
               swap(&ptr[j], &ptr[j+1]);
            }
        }
    }
}

int main()
{
    int *ptr = new int[5];
    int tam =5;
    for(int i=0; i<5; i++){
        ptr[i] = tam-i;
    }

    for(int i=0; i<5; i++){
        cout<<ptr[i]<<" ";
    }cout<<endl;

    cout<<sum_arr(ptr)<<endl;
    cout<<sum_arr_rec(ptr, tam)<<endl;



    bubble(ptr, tam);

    for(int i=0; i<5; i++){
        cout<<ptr[i]<<" ";
    }

    delete[] ptr;
    return 0;
}
