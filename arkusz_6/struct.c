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
Animal kotek;
kotek.n_legs= 4;
kotek.height_m=0.4; //strcpy
strcpy(kotek.name, "alojzy");
// kotek.name="alojzy"; ZLE
strcpy(kotek.species, "cat");
printAnimal( &kotek );
Animal maupka;
maupka.n_legs=3;
maupka.height_m=1;
printf("\n");
strcpy(maupka.name,"kuku");
strcpy(maupka.species,"monkey");
printAnimal( &maupka);
Animal stado[3];
stado[0]= kotek;
stado[1]= maupka;
Animal pies;
pies.n_legs=5;pies.height_m=0.89;
strcpy(pies.name,"uszatek_puszatek");
strcpy(pies.species,"dog");
stado[2]=pies;
for (int i=0; i<3; i++){ printf("\n"); printAnimal(&stado[i]); }

//wskaznik na structa

Animal* wsk_an;
Animal h;
wsk_an= &h;
wsk_an->n_legs=2;
wsk_an->height_m=0.7;
strcpy(wsk_an->name, "Stefan");
strcpy(wsk_an->species, "human");
printf("%d \n", wsk_an->n_legs);
printf("%.2lf \n", wsk_an->height_m);
printf("%s \n", wsk_an->name);
printf("%s \n", wsk_an->species);


return 0;
}

