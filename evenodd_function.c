//write a function to check number is even or odd no return with arg

#include<stdio.h>

void evenodd(int num){
	if(num%2==0){
		printf("Even Number");
	}else{
		printf("Odd Number");
	}
}

int main(){
	
	evenodd(5);
	return 0;
}
