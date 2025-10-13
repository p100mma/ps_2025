#include <stdio.h>
#include <windows.h>
int main() {

SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);
//zmienne:

double netto;   // r -promieñ, double '%lf' (MA£E "L", MA£E "F")
double podatek= 0.23;
// BRUTTO = (1+ podatek)*netto
printf("Podaj cene netto= ");
scanf("%lf",&netto);
printf("Podaj wartosc podatku = ");
scanf("%lf",&podatek);
printf("Cena brutto  %.2lf \n", (1+podatek)*netto  );
double grosze = 100*(1+podatek)*netto;
printf("Grosze (double): %.4lf \n",grosze);
int grosze_int= (int) grosze;
printf("Grosze (int): %d \n",grosze_int);
printf("pełnych zł: %d oraz gr: %d", grosze_int/100, grosze_int % 100 );
return 0;
}
