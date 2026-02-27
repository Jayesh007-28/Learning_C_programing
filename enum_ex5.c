#include<stdio.h>

enum Color {Red,Yellow,Green};

int main(){
	
	enum Color d1 = Yellow;
	
	if(d1==Red){
		printf("Stop....");
	}else if(d1==Yellow){
		printf("Slow...");
	}else{
		printf("Go....");
	}
	
	
	return 0;
}
