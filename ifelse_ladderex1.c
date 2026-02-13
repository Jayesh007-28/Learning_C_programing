#include<stdio.h>

int main(){
	int marks = 85;
	if(marks>=90){
		printf("A grade");
	}else if(marks>=75){
		printf("B grade");
	}else if(marks>=60){
		printf("C grade");
	}else if(marks>=35){
		printf("D grade");
	}else{
		printf("Failed");
	}
	return 0;
}
