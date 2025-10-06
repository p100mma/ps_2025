#include <stdio.h>

int main() {

//zmienne:
// int : -3, 0, 1, 10
// float lub double  0.436654743, -46543.54, 3.545
// char "a"
double temp;   // double '%lf' (MA£E "L", MA£E "F")
float temp2;    // na float, specyfikator to '%f'
printf("Podaj wartosc temp. w C: ");
scanf("%lf",&temp);
printf("temp w F to %.5lf stopni.", (temp*9/5) + 32 );
//printf("\n%.2lf",temp2);
return 0;
}
