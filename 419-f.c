
#include<stdio.h>

void main(){

    int i=65;
    while(i<70){
        int j=65;
        while(j<=i){
            printf("%c",j);
                j++;
        }
        printf("\n");
        i++;

    }
}