#include <iostream>

using namespace std;

void printarr(int *arr, int size){
     cout<<"[";
     for(int i{0}; i<size; i++){
         cout<<*arr<<" ";
         arr++;
     }cout<<"]"<<endl;
}

void intercambio(int *a, int *b){
     int tmp = *a;
     *a = *b;
     *b = tmp;
}

void invertirArray(int *ini, int *fin)
{
    while(ini < fin){

      int tmp = *ini;
      *ini = *fin;
      *fin = tmp;

      ini++;
      fin--;
    }
}

void invertirArray_rec(int *ini, int *fin){

    //recursivo
    if(ini <= fin) return;

    intercambio(ini,fin);
    return invertirArray_rec(ini+1, fin-1);

}



int main()
{
    int arr[] = {1,2,3,4,5};
    int tam = sizeof(arr) / sizeof(arr[0]);
    printarr(arr,tam);

    int x{34}, y{12};
    intercambio(&x,&y);

    cout<<x<<endl;
    cout<<y<<endl;

    invertirArray(arr, arr+tam-1);
    printarr(arr,tam);

    invertirArray_rec(arr, arr+tam-1);
    printarr(arr,tam);

    return 0;
}
