#include<stdio.h>
#include<string.h>

struct Student{
	int id;
	char name[20];
	float height;
	float marks;
};

int main(){
	
	struct Student s1;
	
	printf("Enter ID number : ");
	scanf("%d",&s1.id);
	
	printf("Enter Name : ");
	scanf("%s",s1.name);
	
	printf("Enter The Height : ");
	scanf("%f",&s1.height);
	
	printf("Enter Marks : ");
	scanf("%f",&s1.marks);
	
	printf("========== Student Details =============\n");
	
	printf("ID = %d\n",s1.id);
	printf("Nmae = %s\n",s1.name);
	printf("Height = %.1f\n",s1.height);
	printf("Marks = %.2f\n",s1.marks);
	
	return 0;
}
