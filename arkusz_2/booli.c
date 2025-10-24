#include <stdio.h>
#include <stdbool.h>
int main() {
bool x=false;
bool y= (3 >5);

if (x)
    printf("x to true");
else
    printf("x to false");

printf("\n y to %s", y ? "true": "false");
return 0;
}
