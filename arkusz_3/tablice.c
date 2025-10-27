#include <stdio.h>
#define N 10
int main(){
 int tab[5];   // zarezerwowac 5 miejsc na int-y, jeden po drugim
for (int i=0; i<5; i++ )
    tab[i]=i*i;
int tab2[] = {0,1,2,3,4} ;
int tab3[N]; // vs int size=10; tab[size]; //ERROR
for (int i=0; i<5; i++)
    printf("%4d \n", tab[i]);
// int tab[wiersze][kolumny];
int tab2D[5][3];
int counter=0;
for (int i=0; i<5; i++ )
    for (int j=0; j<3; j++ ) {
        tab2D[i][j]= ++counter;
    }
for (int i=0; i<5; i++ ) {
    for (int j=0; j<3; j++ )
        printf("%4d ", tab2D[i][j]);
    printf("\n");
    }
return 0;
}
