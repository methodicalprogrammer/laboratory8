#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int numb, i, j, b[100], a[100000];
    
    srand(time(NULL));
    for(i=0; i<100000; i++){
        a[i] = rand()%100;
    }

    for(j=0; j<100; j++){
        b[j] = 0;
    }

    for(j=0; j<100; j++){
        for(i=0; i<100000; i++){
            if(a[i]==j){
                b[j] = b[j] + 1;
            }
        }
    }

    printf("Element   Value\n");
    for(j=0; j<100; j++){
        printf("%d         %d \n", j, b[j]);
    }

    return 0;
}