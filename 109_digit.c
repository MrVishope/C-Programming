// Sum of the digits of three digit number.

#include<stdio.h>

void main(){
	int num,i,con,d=100,sum=0;
	printf("Enter Three digit number:");
	scanf("%d",&num);
	for(i=0; i<3; i++){
		con = num/d;
		num -= (con*d);
		sum += con;
		d = d/10;
		
	}
	printf("\nThe sum is:%d",sum);
	getch();
}
