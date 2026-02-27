#include<stdio.h>

enum Days {mon,tue,wed,ths,fri,sat,sun};

int main(){
	enum Days d1 = ths;
	printf("Value of thursday : %d\n",d1);
	return 0;
}
