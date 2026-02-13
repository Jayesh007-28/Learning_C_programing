#include<stdio.h>

int main(){
	int n = 5 , result;
//	Left shit
	printf("Left shift : %d\n",(n<<1));
	printf("Left shift : %d\n",(n<<2));
	printf("Left shift : %d\n",(n<<3));
	printf("Left shift : %d\n",(n<<4));
//  Right shift
	printf("right shift : %d\n",(n>>1));
	printf("right shift : %d\n",(n>>2));
	printf("right shift : %d\n",(n>>3));
	printf("right shift : %d\n",(n>>4));
	
	return 0;
}
