#include <stdio.h>
//tylko warning jak podamy tabele 10-elementowa
void display(int tab[20]){
for (int i=0; i<20; i++)
    printf("%4d", tab[i]);
printf("\n");
}
//bez warning
void display_v2(int tab[]){
for (int i=0; i<20; i++)
    printf("%4d", tab[i]);
printf("\n");
}
//kompilator i tak widzi coœ takiego:
void display_v3(int* tab){
for (int i=0; i<20; i++)
    printf("%4d", *(tab+i));
printf("\n");
}
//..zatem wszystkie powy¿sze funkcje dzia³aja tak samo
// ..¿adna nie pilnuje rozmiaru tablicy, sama z siebie.

// WNIOSEK

// definuj¹c funkcjê dzia³aj¹c¹ na tablicy, pobieraj jako parametr jej za³o¿ony rozmiar!

void display_correct(int* tab, int size){
for (int i=0; i< size; i++)
    printf("%4d", tab[i]);
printf("\n");
}


int main(){
int tab[] = {0,1,2,3,4,5,6,7,8,9};
printf("adres tab[0] = %p, tab = %p \n", &tab[0], tab);
printf("tab[0] = %d, *tab = %d, *(tab+0)=  %d \n", tab[0], *tab, *(tab+0) );
for (int i=1; i<=9; i++){
    printf("tab[i] = %d, *(tab+i)= %d \n", tab[i], *(tab+i));
    printf("&tab[i] = %p, tab+i= %p \n", &tab[i], tab+i);
    }
printf("display(tab): ");
display(tab);
printf("display_v2(tab): ");
display_v2(tab);
printf("display_v3(tab): ");
display_v3(tab);
printf("display_correct(tab):");
display_correct(tab, 10);
}
