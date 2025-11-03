#include <stdio.h>


int main() {

int x;
int s=0;
do {
    printf("Podaj x: ");
    scanf("%d", &x);
    if (x > 0) s= s+ x;
    printf("suma = %d ", s );

} while( x> 0);


return 0;

}
