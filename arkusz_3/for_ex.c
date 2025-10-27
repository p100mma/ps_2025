#include <stdio.h>

int main(){
// for ( instrukcje poczatkowe ;WARUNEK; co pomiedzy iteracjami ) {
// instrukcje wykonywane az WARUNEK to true
// }
for (int i=0; i<8;i++){
    printf("%d \n", i);
}
for (int i=0; i<8;i++){
    printf("#");
}
// printf("%d \n", i); ERROR, i istnieje tylko w petli
// n! = 1* 2 * 3* 4...*n
int fac=1;
for (int i=1; i<=4; i++){
    fac*=i;
}
printf("\n !%d = %d ",4,fac);
return 0;
}

