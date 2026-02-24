#include<stdio.h>

int main(){
	int rev=0,rem,num,n;
	printf("Enter Number : ");
	scanf("%d",&n);
	num=n;
	
	while(n>0){
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
	}
	if(num==rev){
		printf("The number %d is palindrome number.",num);
	}else{
		printf("The number %d is not palindrome number.",num);
	} 0
	return 0;
}
