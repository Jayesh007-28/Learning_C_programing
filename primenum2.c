#include<stdio.h>

int main(){
	int i,num;
	printf("Enter the number : ");
	scanf("%d",&num);
	
	for(i=2;i<num;i++){
		
		if(num%i==0){
			printf("Number is not prime number.");
			
			break;
		}
	}
	if(i==num){
		printf("Number is a prime number.");
	}
	return 0;
}
