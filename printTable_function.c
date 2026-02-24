//write a function to print table of number no return with arg

#include<stdio.h>

void printTable(int num){
	int i;
	for(i=1;i<=10;i++){
		printf("%d * %d = %d\n",num,i,num*i);
	}
}

int main(){
	printTable(10);
	return 0;
}
