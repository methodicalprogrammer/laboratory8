#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int average(int a[], int n){
    int i, sum;
    sum = 0;
    for(i=0; i<n; i++){
        sum = sum + a[i];
    }
    return sum/n;
}


int main(){
    int i, a[1000];
    srand(time(NULL));
    for(i=0; i<1000; i++){
        a[i] = rand();
        printf("%d\n", a[i]);
    }
    printf("The average number is: %d", average(a, 1000));
    
    return 0;
}