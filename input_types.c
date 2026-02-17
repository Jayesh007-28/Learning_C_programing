#include<stdio.h>

int main(){
	int id;
	float salary;
	char grade;
	char name[20];
	
	printf("Enter id : ");
	scanf("%d",&id);
	
	printf("Enter Salary : ");
	scanf("%f",&salary);
	
	printf("Enter Grade : ");
	scanf(" %c",&grade);
	
	printf("Enter Name : ");
	scanf("%s",&name);
	
//	printf("\n id = %d\n",id);
//	printf("\n salary = %.2f\n",salary);
//	printf("\n grade = %c\n",grade);
//	printf("\n name = %s\n",name);

	printf("\n ID=%d \n Salary=%.2f \n Grade=%c \n Name=%s",id,salary,grade,name);
	return 0;
}
