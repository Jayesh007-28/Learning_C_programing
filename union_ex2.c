#include<stdio.h>

union Washingmachine{
	int rinseTime;
	int washTime;
	int spinTime;
};

int main(){
	
	union Washingmachine w1;
	
	w1.rinseTime=12;
	printf("Rise Time = %d minutes\n",w1.rinseTime);
	
	w1.washTime=30;
	printf("Wash Time = %d minutes\n",w1.washTime);
	
	w1.spinTime=25;
	printf("Spin Time = %d minutes\n",w1.spinTime);
	
	return 0;
}
