#include <stdio.h>
int main(){
char chain[5]= "aba";
char chain2[]= {'a','b','a','\0','\0'};  //to samo co skladnia u gory
// '\0' -> specjalny znak "koñca stringa"
printf("chain= %s \n", chain);
printf("chain2= %s \n", chain2);
int end_position;
for (int i=0; i<5; i++ ){
    if (chain[i]=='\0'){
        end_position=i;
        break;
    }
}
printf("end_position= %d",end_position);
return 0;
}
