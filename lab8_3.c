#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned int mystrlen(const char s[]){
    int sum=0;
    int i;
    for(i=0; s[i]!='\0'; i++){
        sum = sum +1;
    }
    return sum;
    
}

int main() {
    char str[1000];

    printf("Give a word:");
    scanf("%s", str);

    printf("Length of given word is %d\n", mystrlen(str));

    return 0;
    }


    