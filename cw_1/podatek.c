#include <stdio.h>

int main() {

//zmienne:

double netto;   // r -promieñ, double '%lf' (MA£E "L", MA£E "F")
double podatek= 0.23;
// BRUTTO = (1+ podatek)*netto
printf("Podaj cene netto= ");
scanf("%lf",&netto);
printf("Podaj wartosc podatku = ");
scanf("%lf",&podatek);
printf("Cena brutto  %.2lf", (1+podatek)*netto  );
return 0;
}
