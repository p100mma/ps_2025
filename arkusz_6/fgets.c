#include <stdio.h>
#include <string.h>
//jak pobierac stringa od uzytkownia ktory zawiera spacje
int main(){
char linijka[200];
printf("daj dane: ");
fgets(linijka, 200, stdin);
printf("\n linijka = %s \n", linijka);
return 0;
}
