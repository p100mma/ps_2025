#include <stdio.h>


int main(){
FILE* f_wsk;
f_wsk= fopen("magazyn.txt","r");
if (f_wsk==NULL){ //nie udlao sie
    printf("nie udalo sie otworzyc magazyn.txt \n");
    return 1;
}
char pojemnik[150];
while( fgets(pojemnik,150,f_wsk) ){
 printf("%s", pojemnik);
}
fclose(f_wsk);
return 0;
}
