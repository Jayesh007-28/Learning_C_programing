#include<stdio.h>

int add(int a , int b){
	return a+b;
}

int main(){
	int res = add(10,20);
	printf("Sum = %d",res);
	return  0;
}
