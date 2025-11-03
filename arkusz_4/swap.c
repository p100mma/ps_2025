#include <stdio.h>

void swap(int* px, int* py){
int temp = *(px);
*px = *py;
*py = temp;
}

int main(){
int a, b;
a=3;
b=5;
printf("a = %d, b= %d \n", a, b);
swap( &a, &b );
printf("after swap: a= %d, b=%d", a, b);
return 0;
}
