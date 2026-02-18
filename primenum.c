//#include<stdio.h>
//
//int main(){
//	int i,cnt=0,n;
//	printf("Enter The number : ");
//	scanf("%d",&n);
//	
//	for(i=1;i<=n;i++){
//		if(n%i==0){
//			cnt++;
//		}
//	}
//	if(cnt==2){
//		printf("The number %d is prime number.",n);
//	}else{
//		printf("The number %d is not prime number.",n);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main(){
//	int i,num;
//	printf("Enter the number : ");
//	scanf("%d",&num);
//	
//	for(i=2;i<num;i++){
//		
//		if(num%i==0){
//			printf("Number is not prime number.");
//			
//			break;
//		}
//	}
//	if(i==num){
//		printf("Number is a prime number.");
//	}
//	return 0;
//}

#include<stdio.h>

int main(){
    int a=1, b=20, i, j, cnt;

    printf("Prime numbers between %d and %d are:\n", a, b);

    for(i = a; i <= b; i++){
        cnt = 0;

        for(j = 1; j <= i; j++){
        	
            if(i % j == 0){
                cnt++;
            }
        }

       if(cnt == 2){
            printf("%d ", i);
        }
    }

    return 0;
}













