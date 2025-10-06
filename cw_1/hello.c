#include <stdio.h>

int main() {

//zmienne:
// int : -3, 0, 1, 10
// float lub double  0.436654743, -46543.54, 3.545
// char "a"
char komunikat[40] = "Hi";   //%s - do lancuchow znakow
int wiek;// %d - do zmiennych int w printf
char imie[80];
double temp=10.65;

//instrukcja scanf
printf("Podaj ile masz lat: ");
scanf("%d",&wiek);
printf("Jak masz na imie: ");
scanf("%s",&imie);

printf("Hello you are %d yrs old, %s.",wiek, imie);

return 0;
}
