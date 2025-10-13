#include <stdio.h>
#include <windows.h>

int main() {
SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);
int x,y,z;
printf("zad.1: \n");
printf("Podaj x,y,z: ");
scanf("%d %d %d", &x, &y, &z);
//printf(( x % z) == 0 ? "x dzieli się przez z \n" : "x nie dzieli się przez z \n" );
//printf(( y % z) == 0 ? "y dzieli się przez z \n" : "y nie dzieli się przez z \n" );
if ((x%z ==0 ) && (y%z == 0 ) ){
    printf("Obie liczby się dzielą.");
} else {
  printf("Jedna z liczb się nie dzieli prez %d.",z );
}



return 0;
}
/*
0  0  +0=0
1  1  +2=3
2  2  +1=3
3  0  +0=3
4  1  +2=6
5  2  +1=6
6  0  +0=6
7  1
8  2
9  0
*/
