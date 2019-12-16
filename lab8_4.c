#include <stdio.h>
#include <stdlib.h>

int mystrcmp(const char s1[], const char s2[]){
    int i, x;
    int sum1 = 0;
    int sum2 = 0;


    for(i=0; s1[i]!='\0'; i++){
        sum1 = sum1 + s1[i];
    }
    for(i=0; s2[i]!='\0'; i++){
        sum2 = sum2 + s2[i];
    }
    
    if(sum1>sum2){ 
        x = -1;
        return x;
    }
    if(sum2>sum1){
        x = 1;
        return x;
    }
    if(sum1==sum2){
        x = 0;  
        return x;
    }
}

int main(){
    char s1[100], s2[100];

    printf("Type first string: \n");
    scanf("%s", s1);
    printf("Type second string: \n");
    scanf("%s", s2);
    
    if(mystrcmp(s1, s2)==-1) {
        printf("'%s' is bigger than '%s'", s1, s2);
    }
    if(mystrcmp(s1, s2)==1) {
        printf("'%s' is lower than '%s'", s1, s2);
    }
    if(mystrcmp(s1, s2)==0) {
        printf("'%s' is equal to '%s'", s1, s2);
    }
    return 0;
}