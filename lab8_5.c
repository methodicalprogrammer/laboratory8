#include <stdio.h>
#include <stdlib.h>


int main(){
    int  x0, a[11];
    int i, d;

    printf("Type the value of  power : ");
    scanf("%d", &d);

    for(i=0; i<=d; i++){
        printf("Type the a%d : ", i);
        scanf("%d", &a[i]);
    }

    printf("Type the value of x0 : ");
    scanf("%d", &x0);

    int t;
    t = a[d];
    
    for(i=d-1; i>=0; i--){
        t =  t*x0 + a[i];
    }

    printf("%d \n", t);

    return 0;
}