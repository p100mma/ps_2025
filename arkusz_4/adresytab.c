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
//kompilator i tak widzi cos takiego:
void display_v3(int* tab){
for (int i=0; i<20; i++)
    printf("%4d", *(tab+i));
printf("\n");
}
//..zatem wszystkie powyzsze funkcje dzialaja tak samo
// ..zadna nie pilnuje rozmiaru tablicy, sama z siebie.

// WNIOSEK

// definujac funkcje dzialajaca na tablicy, pobieraj jako parametr jej zalozony rozmiar!

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

// Z.7
// 0 1 2 3 4
// swap(&tab[0], &tab[size-1])
// 4 1 2 3 0
// swap(&tab[1], &tab[size-2])
// 4 3 2 1 0
// swap(&tab[2], &tab[size-3]) // size -3 =2 bo size=5
// 4 3 2 1 0 // jeszcze ok
// swap(&tab[3], &tab[size-4])
// 4 1 2 3 0 // ZLE, za duzo


