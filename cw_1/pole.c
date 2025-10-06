#include <stdio.h>

int main() {

//zmienne:

double r;   // r -promieñ, double '%lf' (MA£E "L", MA£E "F")
double PI= 3.141592;
// pole_ko³a = r*r*PI
printf("Podaj r= ");
scanf("%lf",&r);
printf("Pole kola to %e",r*r*PI );
return 0;
}
