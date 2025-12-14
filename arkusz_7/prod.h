#include <stdio.h>
#include<string.h>

#ifndef PROD
#define PROD

typedef struct { //przykladowa zawartosc produkt.h
char name[60];
unsigned int quant;
double price;
} Produkt;

void printProdSimple(const Produkt *p);

int przypiszDaneProduktu(char* line, Produkt *p);

#endif
