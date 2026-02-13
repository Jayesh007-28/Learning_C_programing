#include<stdio.h>

int main(){
	int age = 19 , id = 2;
	if(age>=18){
		if(id==1){
			printf("you can vote");
		}else{
			printf("Id is not match");
		}
	}else{
		printf("you can not vote");
	}
	return 0;
}
