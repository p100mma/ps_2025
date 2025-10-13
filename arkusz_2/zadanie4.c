#include <stdio.h>
#include <windows.h>

int main() {
SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);
int a1,b1,c1;
printf("zad.4: \n");
printf("Podaj kąty alfa1,beta1,gama1: ");
scanf("%d %d %d", &a1, &b1, &c1);
if  ( ((a1 + b1 + c1)!= 180) ) {
printf("trójkąt nie może być skonstruowany.");
} else {
  printf("Da się.");
}

return 0;
}

