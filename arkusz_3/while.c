#include <stdio.h>


int main() {

int x;
int s=0;
printf("Podaj x: ");
scanf("%d", &x);
while ( x>0 ){
  s= s +x;
  printf("suma = %d  ",s);
  printf("Podaj x: ");
  scanf("%d", &x);
}


return 0;

}
