#include<stdio.h>

int main(){
	
	int choice;
	printf("Enter a choice : ");
	scanf("%d",&choice);
	
	switch(choice){
		case 1 :
			printf("Monday");
			break;
		
		case 2 :
			printf("Tuseday");
			break;
		
		case 3 :
			printf("Wendsday");
			break;
			
		case 4 :
			printf("Thursday");
			break;
			
		case 5 :
			printf("Friday");
			break;
			
		case 6 :
			printf("Saturday");
			break;
			
		case 7 :
			printf("Sunday");
			break;
			
		default:
			printf("Invalid Choice......! Please enter number between 1 to 7.");
	}
	
	return 0;
}
