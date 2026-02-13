#include<stdio.h>

int main(){
	int a=10 , b=5 , c=10;
	printf("(a==b) && (a>b): %d\n", (a==b) && (a>b));  //0
	printf("(a>b) && (b>c) : %d\n", (a>b) && (b>c));   //0
	printf("(a<b) && (b>c) : %d\n", (a<b) && (b>c));  //0
	printf("(a==b) || (a>b): %d\n", (a==b) || (a>b)); //1
	printf("(a>b) || (b>c) : %d\n", (a>b) || (b>c));  //1
	printf("(a<b) || (b>c) : %d\n", (a<b) || (b>c));  //0
	printf("!(a>b): %d\n", !(a>b));                    //0
	printf("!(a==b) : %d\n",!(a==b));                  //1
	return 0;
}
