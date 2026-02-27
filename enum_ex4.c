#include<stdio.h>

enum Color {Red,Green,Blue};

int main(){
	
	enum Color d1 = Blue;
	
	switch(d1){
		case Red:
			printf("Color is Red");
			break;
		
		case Green:
			printf("Color is Green");
			break;
			
		case Blue:
			printf("Color is Blue");
			break;
			
		default :
			printf("Invalid Color..........");
	}
	
	return 0;
}
