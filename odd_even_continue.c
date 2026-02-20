#include<stdio.h>

int main(){
	int i,j;
	
	printf("Even Numbers : ");
	for(i=1;i<=10;i++){
		if(i%2!=0){
			continue;
		}
		printf("%d ",i);
	}
	printf("\n");
	printf("Odd numbers : ");
	for(j=1;j<=10;j++){
		if(j%2==0){
			continue;
		}
		printf("%d ",j);
	}
}
