#include <stdio.h>
int main() {
   int x;
   int* px;
   px=&x;  //&x <- adres x
   x=3;
   printf(" adres x = %p, px = %p \n", &x, px);  // %p - wyswietla adresy
   printf(" x= %d \n", x);
   // *px <- wartości zmiennej, na którą wskazuje px.
   printf(" *px= %d \n", *px );
   *px = 1;
   printf(" x = %d \n", x );
   printf(" *px = %d \n", *px);
    printf(" adres x = %p, px = %p \n", &x, px);
    int y= 5;
    px=&y;
    printf("adres y= %p, y= %d \n", &y, y);
    printf("px = %p, *px= %d \n", px, *px);
    return 0;
}
