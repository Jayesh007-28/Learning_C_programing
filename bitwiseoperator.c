#include<stdio.h>

int main(){
	int a=12 , b=5 , result;
	
	result = a&b;
	printf("Result of bitwise And : %d\n",result);
	
	result = a|b;
	printf("Result of bitwise Or : %d\n",result);
	
	result = a^b;
	printf("Result of bitwise Xor : %d\n",result);
	
	result = ~a;
	printf("Result of bitwise not : %d\n",result);
	return 0;
}
