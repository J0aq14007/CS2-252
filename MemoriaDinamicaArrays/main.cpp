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

void bubble(int *ptr, int tam){

    for(int i=0; i<tam-1; i++){
        for(int j=0; j<tam-i-1; j++){
            if(ptr[j] > ptr[j+1]){
               swap(&ptr[j], &ptr[j+1]);
            }
        }
    }
}
/**
insertion, merge, quick
**/

void insertion(int *ptr, int tam){

    for(int j = 1; j < tam; j++){ 
         int key = ptr[j];
         int i;
         
         for(int i= j-1; i>0 && ptr[i] > key; i--){
             ptr[i+1] = ptr[i];
         }
         ptr[i+1] = key;
    }

}

void quick(int *ptr, int tam){
     
     int i = 0;
     while (i < tam - 1) {
        int pivote = ptr[tam - 1]; 
        int j = i;
        int k = tam - 2;

        while (j <= k) {
        
            if (ptr[j] > pivote && ptr[k] < pivote){
            
                swap(&ptr[j+1], &ptr[k-1]);
            }
            else if (ptr[j] <= pivote){
                j++;
            }
            else if (ptr[k] >= pivote){
                k--;
            }
        }
        swap(&ptr[j], &ptr[tam - 1]); 
        tam--; 
    }

}

void merge(int *ptr, int tam){

     
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
    cout<<"BUBBLE"<<endl;
    for(int i=0; i<5; i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    
    for(int i=0; i<5; i++){
        ptr[i] = tam-i;
    }
    
    insertion(ptr, tam);
     cout<<"INSERTION"<<endl;
    for(int i=0; i<5; i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    
    for(int i=0; i<5; i++){
        ptr[i] = tam-i;
    }
    
    quick(ptr,tam);
    cout<<"QUICK"<<endl;
    for(int i=0; i<5; i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
  
    delete[] ptr;
    
    return 0;
}
