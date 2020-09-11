// gram and kilogram

#include<stdio.h>

void main(){
	int gram,kg,left;
	printf("Enter the number of gram:\n");
	scanf("%d",&gram);
	if (gram<1000){
		printf("The weight is less than 1kg that is %dg",gram);
	}
	else{
		kg = gram/1000;
		if(gram%1000 != 0){
			left = gram - (kg*1000);
			printf("The weight is %dkg and %dg.",kg,left);
		}
		else{
			printf("The weight is %dkg.",kg);
		}
	}
	getch();
}
