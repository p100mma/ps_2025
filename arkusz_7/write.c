#include <stdio.h>

int main(){
FILE* f_wsk;
f_wsk= fopen("nowy.txt","w");
if (f_wsk==NULL){ //nie udlao sie
    printf("nie udalo sie otworzyc nowy.txt \n");
    return 1;
}

fprintf(f_wsk,"%s;%d\n", "dane1", 34  );
fprintf(f_wsk,"%s;%d\n", "dane2", 34  );

fclose(f_wsk);
return 0;
}
