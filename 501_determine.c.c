//WAP to take one dimensional array of n size and display each index individually.
#include<stdio.h>
void main(){
    int array[5],i,n;
    printf("Enter 5 numbers in an array:");
    for(i=0; i<5; i++){
        scanf("%d",&array[i]);
    }

    printf("Enter the number to show the values individually:");
    scanf("%d",&n);
        if(n<=5){
        printf("%d",array[n-1]);
        }
        else{
            printf("No such index.");
        }

}