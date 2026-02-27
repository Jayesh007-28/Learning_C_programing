#include<stdio.h>

int main(){
	FILE *fp;
	char name[20];
	int marks;
	fp = fopen("student.txt","r");
	
	fscanf(fp,"Name = %s\n",&name);
	fscanf(fp,"Marks = %d\n",&marks);
	
	
	printf("Name = %s\n",name);
	printf("Marks = %d\n",marks);
	
	fclose(fp);
	
	printf("Data Read successfully");
	
	return 0;
}
