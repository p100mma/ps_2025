#include <stdio.h>
#include<string.h>
#include "prod.h"


void printProdSimple(const Produkt *p){
printf("%s %d %.2lf\n", p->name, p->quant, p->price );
}

int przypiszDaneProduktu(char* line, Produkt *p){
char nazwa[100];
int ile;
double cena;
int ok=(sscanf(line, "%s %d %lf", nazwa, &ile, &cena)==3);
if (ok){
strcpy(p->name,nazwa);
p->quant = ile;
p->price = cena;
};
return ok;
}


