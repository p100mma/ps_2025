#include <stdio.h>


int main(int argc, char* argv[]  ){
//argc == liczba_argumentow od usera + 1
//argv == tablica charow, zawierajaca te argumenty.
printf("hello world \n");
printf(" argc= %d  \n", argc);
printf("l. args= %d \n",
       argc -1);
for (int j=0; j<argc; j++){
    printf("\n argv[%d]= %s \n",
           j, argv[j]
            );
}
return 0;
}
