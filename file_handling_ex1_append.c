

#include<stdio.h>

int main(){
	FILE *fp;
	fp = fopen("student.txt","a");
    
	fprintf(fp,"This line is appended at end \n");
	fprintf(fp,"This 2nd line is appended at end \n");
	fclose(fp);
	printf("Data Appended successfully \n");
	return 0;
}
