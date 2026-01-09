#include <stdio.h>
#include <stdlib.h>

typedef struct { double x; double y} POINT;

int main(){
POINT *array;
printf("sizeof(double)= %d, sizeof(POINT)= %d \n", sizeof(double), sizeof(POINT));
int n_items=0;
for (int i=0; i<5; i++){
    if (i==0) {array=malloc((n_items+1)*sizeof(POINT));
    } else{
        array=realloc(array, (n_items+1)*sizeof(POINT) );
    }
    n_items++;
    array[n_items-1].x=i;
    array[n_items-1].y=-i;
}
for (int i=0; i<n_items;i++){
    printf("point nr %d \n",i);
    printf("(x,y) = ( %lf, %lf) \n", array[i].x, array[i].y );
}

free(array);
return 0;
}
