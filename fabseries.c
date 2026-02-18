#include<stdio.h>

int main(){
	int a=0,b=1,c,i;
	printf("%d %d ",a,b);
	
	for(i=2;i<=5;i++){
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
	}
	return 0;
}
