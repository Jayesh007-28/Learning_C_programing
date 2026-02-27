#include<stdio.h>

int main(){
	int a=10;
	//int *ptr=&a;
	int *ptr;
	ptr=&a;
	printf("Value of a : %d\n",a);
	printf("Address of a :  %p\n",&a);
	printf("pointer of p stores : %p\n",ptr);
	printf("Value at pointer p : %d\n",*ptr);

	return 0;
}
