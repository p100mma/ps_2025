#include <stdio.h>
#include <stdlib.h>
int main(){
int *dynamic_array;
int x=3;
dynamic_array= malloc( sizeof(int) ); //poczatkowa alokacja m-ca
// na 1 inta
printf("rozmiar typu int: %d; rozmiar zmiennej x (int) %d \n",
       sizeof(int),sizeof(x)
       );
dynamic_array[0]=56;
printf("dynamic_array[0]= %d \n",dynamic_array[0] );
dynamic_array= realloc(dynamic_array,2*sizeof(int) );  //powiekszenie
//pojemnosci na 2 inty
dynamic_array[1]=-435423;
printf("dynamic_array[1]= %d \n",dynamic_array[1] );
free(dynamic_array);
return 0;
}
