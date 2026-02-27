#include<stdio.h>

void changeVariable(int *ptr){
	*ptr=50;
}

int main(){
	int a=10;
	//int *ptr=&a;
//	int *ptr;
//	ptr=&a;
//	
	changeVariable(&a);
	
	printf("Value of a : %d\n",a);
	printf("Address of a :  %p\n",&a);
//	printf("pointer of p stores : %p\n",ptr);
//	printf("Value at pointer p : %d\n",*ptr);
	return 0;
}
