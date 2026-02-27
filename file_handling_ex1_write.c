//// Writing To file
//#include<stdio.h>
//
//int main(){
//	FILE *fp;
//	fp = fopen("C:\\2612\\jayesh_write.txt","w");
//	if(fp==NULL){
//		printf("Error opening \n");
//		return 1;
//	}
//	fprintf(fp,"Hello , Its File Handling \n");
//	fprintf(fp,"Hello , Its File Handling 2nd line \n");
//	fclose(fp);
//	printf("Data Written Successfully");
//	return 0;
//}


#include<stdio.h>

int main(){
	FILE *fp;
	
	fp = fopen("student.txt","w");
	
	fprintf(fp,"Name = Jayesh\n");
	
	fprintf(fp,"Marks = 99.50\n");
	
	fprintf(fp,"Hello file Handling\n");
	
	fclose(fp);
	
	printf("Data written successfully");
	
	return 0;
}







