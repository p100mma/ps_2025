#include <stdio.h>


int main() {

int sec;
printf("Podaj liczbe sekund:");
scanf("%d", &sec);
printf("Liczba minut:godzin:dni to: %d:%d:%d", sec/60, sec/(60*60), sec/(60*60*24) );

}
