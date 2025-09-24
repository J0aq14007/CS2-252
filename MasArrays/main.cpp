#include <iostream>

using namespace std;

/**
   Implementar funcion para invertir los elementos de un arreglo
**/
void invertir_arr(int arr[], int tam){

    /**  |10|20|30|40|50|
         |50|20|30|40|10|
         **|50|40|30|20|10|**
    */
    for(int i{0}, j{tam-1}; i<j; i++, j--){

        int tmp {arr[i]};
        arr[i] = arr[j];
        arr[j] = tmp;
    }
}

void invertir_rec_arr(int arr[], int tam, int i=0){

     if(tam > i) { return ;}
     else{
         int temp = arr[i];
         arr[i] = arr[tam-1];
         arr[tam-1] = temp;

         invertir_rec_arr(arr, tam-1, i+1);
     }
}

void intercambio(int &a, int &b){

     int tmp = a;
     a=b;
     b = tmp;

}
void invertir_arr_swap(int arr[], int tam){
     for(int i=0, j=tam-1; i<j; i++, j--){

         intercambio(arr[i],arr[j]);

     }

}
void invertir_arr_swap_r(int arr[], int tam, int i=0){


     if(tam > i) { return ;}
     else{
         intercambio(arr[i],arr[tam-1]);

         invertir_rec_arr(arr, tam-1, i+1);
     }
}

void print_arr(int arr[], int tam){

    cout<<"[ ";
    for(int i=0; i<tam; i++){

        cout<<arr[i]<<" ";
    }cout<<" ]";
}

int main()
{
    int arr[] = {10,20,30,40,50};

    print_arr(arr, 5);

    invertir_arr(arr,5);
    cout<<endl;
    print_arr(arr, 5);
    invertir_rec_arr(arr,5);
    cout<<endl;
    print_arr(arr,5);
    invertir_arr_swap(arr,5);
    invertir_arr_swap_r(arr,5);

    return 0;
}
