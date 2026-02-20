#include<stdio.h>

int main(){
	char letters[4]={'a','b','c','d'};
	int i;
	for(i=0;i<4;i++){
		printf(" %c",letters[i]);
	}
	printf("\n");
	
	int arr[5] = {10,20,30,40,50};
	
	printf("%d \n",arr[2]);
	for(i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("Reverse array\n");
	for(i=4;i>=0;i--){
		printf("%d ",arr[i]);
	}
	return 0;
}
