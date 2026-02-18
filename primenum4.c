#include<stdio.h>

int main(){
    int a=1, b=20, i, j;

    printf("Prime numbers between %d and %d are:\n", a, b);

    for(i = a; i <= b; i++){
    	
		if(i==1){
        	continue;
			}    
	
        for(j = 2; j < i; j++){
        		
            if(i % j == 0){
                break;
            }
        }

       if(i==j){
            printf("%d ", i);
        }
    }

    return 0;
}

