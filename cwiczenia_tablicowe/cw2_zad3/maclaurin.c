#include <stdio.h>
#include <math.h>



int main(){

double x, eps;

printf("podaj x (w przedziale [-1,1]) i eps: ");
scanf("%lf %lf", &x, &eps);
double sum=0;
double newsum=0;
int i=1;
do{
sum= newsum;
newsum= newsum + (pow(-1,i-1)/ i )*pow(x,i);
//printf("i = %d : %lf \n",i, newsum);
i++;
} while( fabs( sum - newsum ) >= eps ); // | old - new | >= epsilon

printf("wynik= %.10lf. Zrobiono %d krokow.", sum,i);

return 0;
}
