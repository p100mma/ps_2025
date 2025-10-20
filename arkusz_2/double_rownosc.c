#include <stdio.h>
#include <math.h>

int main() {
float a,b,c;
a=0.1;
b=0.2;
c=0.3;
if ((a+b)==c){
   printf("a+b == c is true. \n");
} else{
   printf("a+b == c is false \n");
}
printf("a == %.30f \n", a);
printf("b == %.30f \n", b);
printf("a +b  == %.30f \n", a+ b);
printf("c == %.30f \n", c);
float DELTA=1e-10;
printf("DELTA== %.30f \n", DELTA);
if ( fabs((a+b)-c)<DELTA ){
    printf("equal at specified DELTA.");
} else {
   printf("not equal at DELTA.");
}
return 0;
}
