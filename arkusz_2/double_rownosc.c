#include <stdio.h>
#include <math.h>

int main() {
double a,b,c;  // mozna porownac na float vs double
a=0.1;
b=0.2;
c=0.3;
if ((a+b)==c){
   printf("a+b == c is true. \n");
} else{
   printf("a+b == c is false \n");
}
printf("a == %.30lf \n", a);
printf("b == %.30lf \n", b);
printf("a +b  == %.30lf \n", a+ b);
printf("c == %.30lf \n", c);
float DELTA=1e-10;
printf("DELTA== %.30lf \n", DELTA);
if ( fabs((a+b)-c)<DELTA ){
    printf("equal at specified DELTA.");
} else {
   printf("not equal at DELTA.");
}
return 0;
}

