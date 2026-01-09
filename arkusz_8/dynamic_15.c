#include <stdio.h>
#include <stdlib.h>
int main(){
double *dynamic_array;
dynamic_array= malloc( 15*sizeof(double) ); //alokacja na 15 int
for (int i=0; i<15; i++){
    dynamic_array[i]= (1.*i)/2;
}
//wyswietlamy zawartosc
for (int i=0; i<15; i++){
  printf("dynamic_array[%d]= %lf \n", i, dynamic_array[i]);
}
int n_items=15; //dopisujemy dodatkowe elementy do tablicy
for (int k=0; k<4; k++){
    dynamic_array= realloc(dynamic_array,
                           (n_items+1)*sizeof(double)  );
                           //za kazdym razem powiekszamy rozmiar
                           //przed dopisaniem
    n_items++; //sami pilnujemy rozmiaru
    dynamic_array[n_items-1]= k*k + 3;
}
for (int i=0; i<n_items; i++){
  printf("dynamic_array[%d]= %lf \n", i, dynamic_array[i]);
}
free(dynamic_array);
return 0;
}
