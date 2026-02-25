#include<stdio.h>
#include<string.h>

struct Mobile{
	int ram;
	char brand[20];
	float price;
};

int main(){
	
	struct Mobile m1 = {8,"Redmi",25000};
	
	printf("Ram = %d GB\n",m1.ram);
	printf("Brand = %s\n",m1.brand);
	printf("price = %.2f\n",m1.price);
	
	return 0;
}
