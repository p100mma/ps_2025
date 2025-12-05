#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char* argv[]){
    if (argc!=4){
    printf("USAGE: .\\licz.c lewa srodek prawa");
    return 1;
    }
    if (strcmp(argv[2], "x" )==0){ //przypadek mnozenia
    printf("%s x %s= %.5lf", argv[1], argv[3],
           atof(argv[1])*atof(argv[3])    );
    }
    // if (strcmp(argv[2], "-")==0) {
    // przypadek odejmowania..
    //}
    //itd..
    return 0;
}
