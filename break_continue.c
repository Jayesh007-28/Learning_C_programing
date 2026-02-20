#include<stdio.h>

int main(){
	int i,j;
	
	printf("Break keyword\n");
	for(i=1;i<=10;i++){
		if(i==5){
			break;
		}
		printf("%d\n",i);
	}
	
	printf("Continue keyword\n");
	for(j=1;j<=10;j++){
		if(j==5){
			continue;
		}
		printf("%d\n",j);
	}
	return 0;
}
