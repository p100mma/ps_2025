#include <stdio.h>
#include <math.h>



int main(){

double x, eps;

printf("podaj x (w przedziale [-1,1]) i eps: ");
scanf("%lf %lf", &x, &eps);
double sum=0;
double newsum=x; //musimy cos tu wstawic bo inaczej petla nigdy
                 // sie nie uruchomi :P ((-1)^0)/1 * x = 1/1 *x = x.
int i=1;
while (fabs(newsum- sum) >= eps) {  // | new - old | >= epsilon
i++;
sum= newsum;
newsum= newsum + (pow(-1,i-1)/ i )*pow(x,i);
//printf("i = %d : %lf \n",i, newsum);
}

printf("wynik= %.10lf. Zrobiono %d krokow.", sum,i);

return 0;
}
