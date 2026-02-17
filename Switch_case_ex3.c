#include<stdio.h>
int main(){
	
	char grade;
	printf("Enter Your Grade (A,B,C,D,E,F):");
	scanf("%c",&grade);
	
	switch(grade)
	{
		case 'A' :
			printf("Distiction");
			break;
		
		case 'B' :
			printf("1st Class");
			break;
			
		case 'C':
			printf(" 2st Class ");
			break;
		
		case 'D' :
			printf("Average");
			break;
		
		case 'E' :
			printf("Poor");
			break;
		
		case 'F' :
			printf("Better Luck! Next Time");
			break;
			
		default :
			printf("Invalid grade ! Please Valid Grade ");
			
	}
	
	return 0;
}
