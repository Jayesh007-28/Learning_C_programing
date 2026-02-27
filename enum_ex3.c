#include<stdio.h>

enum Level {High=10,Medium=5,Low=1};


int main(){
	enum Level l1 = High;
	printf("value of high : %d ",l1);
	return 0;
}
