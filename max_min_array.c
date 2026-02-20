#include<stdio.h>

int main(){
	int arr[5]= {10,30,90,50,60};
	int max= arr[0],min=arr[0],i;
	
	for(i=1;i<5;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	printf("Max elements = %d\n",max);
	
	for(i=1;i<5;i++){
		if(min>arr[i]){
			min=arr[i];
		}
	}
	printf("Min elements = %d",min);
	
}
