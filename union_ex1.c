#include<stdio.h>

union Student{
	int id;
	char name[20];
	float marks;
};

int main(){
	
	union Student s1 = {.name="Jayesh"};
	
//	printf("ID = %d\n",s1.id);
	printf("Nmae = %s\n",s1.name);
//	printf("Marks = %.2f\n",s1.marks);
	return 0;
}
