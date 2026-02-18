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

