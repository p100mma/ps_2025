#include <stdio.h>
#include <string.h>

typedef struct {
char name[40];
char species[40];
int n_legs;
double height_m;
} Animal;

void printAnimal( const Animal* x  ){
printf("imie: %s \n", x->name);
printf("gatunek: %s \n", x->species);
printf("l. konczyn: %d \n", x->n_legs);
printf("wys(m): %.2lf \n", x->height_m);
}

int main(){
char linijka[]="gacek cat 4 0.5";
char name[40];
char spec[40];
int n_konczyn;
double wys;
int scanf_value= sscanf(linijka, "%s %s %d %lf", name, spec, &n_konczyn, &wys);
printf("scanf_value(jak 4 to ok): %d", scanf_value);
printf("\n");
printf("name= %s \n", name);
printf("species= %s \n", spec);
printf("n_konczyn= %d \n", n_konczyn);
printf("wys= %.2lf \n", wys);
Animal* wsk_kotek;
Animal kotek;
wsk_kotek= &kotek;
strcpy(wsk_kotek->name, name);
strcpy(wsk_kotek->species, spec);
wsk_kotek->n_legs=n_konczyn;
wsk_kotek->height_m=wys;
printf("\n");
printAnimal( wsk_kotek );
printf("\n");
printAnimal(&kotek);
// przypadek blednych danych dla sscanf
char line2[]="gacek pies duzy pies 4 1.1";
char name2[40];
char spec2[40];
int n_konczyn2;
double wys2;
int scanf_value2= sscanf(line2, "%s %s %d %lf", name2, spec2, &n_konczyn2, &wys2);
printf("scanf_value2(jak 4 to ok): %d", scanf_value2);
return 0;
}
