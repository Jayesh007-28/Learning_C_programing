//write a function to find  factorial return with arg

#include<stdio.h>

int fact(int num){
	int fact = 1,i;
	
	for(i=1;i<=num;i++){
		fact*=i;
	}
	return fact;
}

int main(){
	int res;
	res = fact(6);
	printf("Factorial = %d",res);
	return 0;
}
