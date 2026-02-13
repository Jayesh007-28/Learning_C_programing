#include<stdio.h>

int main(){
	//+=
	int a=10 , b=20;
	a+=b;
	printf("a+= = %d\n",a);
	
	//-=
	a-=b;
	printf("a-= = %d\n",a);
	
	//*=
	a*=b;
	printf("a*= = %d\n",a);
	
	// /=
	a/=b;
	printf("a/= = %d\n",a);
	
	// %=
	b%=a;
	printf("b%%= = %d\n",b);
	return 0;
}
