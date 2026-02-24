#include<stdio.h>

int add(){
	int a=100,b=200;
	return a+b;
}

int main(){
	int res = add();
	printf("Sum = %d",res);
	return 0;
}
