#include <stdio.h>
#include <string.h>

int main() {
char x='b'; // char
//if (strcmp(x, "b")==0){ printf("TRUE z strcmp \n");}; ERROR
if (x=='b') printf("TRUE z x=='b'\n"); // tylko to OK jesli x to char
char x2[]= "b";  //vs string - 1 elementowa tablica
if (strcmp(x2,"b")==0) printf(" powinno sie uruchomic \n");
if (strcmp(x, 'b')==0){ printf("TRUE z strcmp(x, 'b') \n");};  //nie pojdzie
if (x2=='b') printf("nie powinno sie uruchomic \n"); //te dwa tez
if (strcmp(x2,'b')==0) printf("nie powinno sie uruchomic \n");
return 0;

}

