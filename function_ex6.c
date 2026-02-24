#include<stdio.h>

void checkBalance(int balance){
	printf("Balance = %d\n",balance);
}

int withdraw(int balance , int amount){
	return balance - amount;
}

int deposit(int balance , int amount){
	return balance + amount;
}

int main(){
	int balance = 10000;
	checkBalance(balance);
	
	balance = withdraw(balance , 2000);
	checkBalance(balance);
	
	balance = deposit(balance , 40000);
	checkBalance(balance);
	return 0;
}

