#include<stdio.h>

int main(){
	
	int a,b;
	printf("Enter the number1 :");
	scanf("%d",&a);
	printf("Enter the number2 :");
	scanf("%d",&b);
	
	char ch;
	printf("Enter the choice :");
	scanf(" %c",&ch);
	
	switch(ch){
		case '+':
			printf("Addition = %d",a+b);
			break;
			
		case '-':
			printf("Substraction = %d",a-b);
			break;
			
		case '*':
			printf("Multiplication = %d",a*b);
			break;
			
		case '/':
			printf("Division = %d",a/b);
			break;
			
		case '%':
			printf("Moduls = %d",a%b);
			break;
			
		default:
			printf("Invalid Choices ! please enter +  - * / %% that choices");
	}
	return 0;
}
