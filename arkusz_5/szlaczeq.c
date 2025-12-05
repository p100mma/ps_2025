#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char* argv[]){
    if (argc!=3){
    printf("USAGE: .\\szlaczek.c twoj_znaczek ile");
    return 1;
    }
    int ile= atoi(argv[2]); // argv[2] to string
    //zatem trzeba uzyc atoi() zeby to przekonwertowac
    // na typ int.
    for (int i=0; i< ile; i++){
        for (int j=0; j< strlen(argv[1])/2;
         j++ )
            printf(" ");
        printf("%s",argv[1]);
        for (int j=0; j< strlen(argv[1])/2;
         j++ )
            printf(" ");
        }
    return 0;
}
