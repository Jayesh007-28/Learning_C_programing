#include<stdio.h>
#include<string.h>

struct Student{
	int id;
	char name[20];
	float height;
	float marks;
};

int main(){
	
	struct Student s1;   //Declaration only
	
	//Assign value seperately
	s1.id=101;
	strcpy(s1.name, "Jayesh_Jadhav");
	s1.height=6.2;
	s1.marks=95.23;
	
	//Printing Data
	printf("ID = %d\n",s1.id);
	printf("Nmae = %s\n",s1.name);
	printf("Height = %.1f\n",s1.height);
	printf("Marks = %.2f\n",s1.marks);
	
	return 0;
}
