//Write a program in C to separate odd and even integers in separate arrays


#include<stdio.h>
void main(){

    int i,sum=0,swap,search,flag1=0,flag2=0;
    int a[10]= {21,2,3,4,7,0,24,1,8,10};
   for(i=0; i<10; i++){
        if(a[i]%2==0){
            flag1++;
        }
        else if(a[i]%2==1){
            flag2++;
        }
    }
    int b[flag1],c[flag2],j=0,k=0;

        for(i=0; i<10; i++){
            if(a[i]%2==0){
                b[j] = a[i];
                j++;
            }
            else{
                c[k] = a[i];
                k++;
            }
        }
            
            printf("Even value:");
            for(i=0; i<flag1; i++){
                printf("\n%d",b[i]);
            }
        printf("\nOdd value:");
                    for(i=0; i<flag2; i++){
                        printf("\n%d",c[i]);
                    }

}