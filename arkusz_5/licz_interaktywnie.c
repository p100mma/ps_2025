#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char* argv[]){
int input;
double x,y;
    do {
    printf("co chcesz robic?: \n");
    printf("0 - nic (koniec) \n");
    printf("1 - dodawanie. \n");
    printf("2 - mnozenie. \n");
    printf("Podaj nr opcji: ");
    scanf("%d", &input);
    if (input==1){
      printf("podaj x,y: ");
      scanf("%lf %lf", &x, &y);
      printf("%lf + %lf = %lf \n",x,y,x+y);
                 }
    if (input==2){
     printf("podaj x,y: ");
      scanf("%lf %lf", &x, &y);
    printf("%lf x %lf = %lf \n",x,y,x*y);
                 }
    } while (input!=0);
    return 0;
}
