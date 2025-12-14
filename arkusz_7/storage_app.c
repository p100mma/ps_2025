#include <stdio.h>
#include<string.h>
#include "prod.h"


int main(){

FILE* fwsk;

fwsk= fopen("magazyn.txt", "r");

char pojemniczek[150];
int i=0;
while (fgets(pojemniczek,150,fwsk)){
//(...)
}
fclose(fwsk);
Produkt magazyn[10];

char co[100];
int howmuch;
printf("Podaj co chcesz kupic: ");
scanf("%s", co);
printf("Podaj ile: ");
scanf("%d", &howmuch);
int query_ok;
int where;
for (int i=0; i<10; i++){
// (...)
}

if (query_ok){
//(...)
} else {
 printf("Nie ma produktu lub nie ma go tyle \n");
 return 1;
}

//zapis update:

FILE* fwsk2;

fwsk2= fopen("magazyn_update.txt","w");
for (int i=0; i<10; i++){
    fprintf( //(...) );
}
int min_quant;
int dec1, dec2;
printf("Want 2 filter by quant? (1/0): ");
scanf("%d",&dec1);
// (...)
double min_price;
printf("Want 2 filter by price? (1/0): ");
scanf("%d",&dec2);
// (...)

printf("Products that satisfy your query: \n");
for (int i=0; i<10; i++){
    int pokaz=1;
 // (...)
}

return 0;
}
