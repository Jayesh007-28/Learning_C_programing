#include<stdio.h>

int main(){
	int userid = 1234 , password=4321;
	if(userid==1234){
		if(password==4321){
			printf("You sucessfully logged in");
		}else{
			printf("Invaild password");
		}
	}else{
		printf("Invalid Username")
	}
	return 0;
}
