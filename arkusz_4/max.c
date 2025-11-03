#include <stdio.h>

int max2(int a, int b){
printf(" wg funkcji max2, a= %d, b=%d \n",a,b);
if (a > b) return a;
return b;
}

void print_integer(int x) {
printf("%d \n", x);
}

int main() {
int b=3;
int a=5;
int max_xy= max2(b,a);
printf("max( %d, %d) = %d \n", b, a, max_xy );
print_integer(b);
print_integer(a);
return 0;
}
