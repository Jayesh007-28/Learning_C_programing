//write a function to reverse a number return with arguments

#include<stdio.h>

int reverseNum(int num){
	int rem,rev=0;
	
	while(num>0){
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;
	}
	
	return rev;
}

int main(){
	int res = reverseNum(1234);
	printf("Reverse number = %d",res);
	return 0;
}
