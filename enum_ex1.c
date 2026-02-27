//#include<stdio.h>
//
//enum Days={mon,tue,wed,ths,fri,sat,sun};
//
//int main(){
//	enum Days d;
//	char ch[20];
//	
//	for(ch=mon;i<=sun;ch++){
//		printf("%s\n",ch);
//	}
//	return 0;
//}

#include<stdio.h>

enum Days {mon,tue,wed,ths,fri,sat,sun};

int main(){
	int i;
    char *days[] = {"mon", "tue", "wed", "ths", "fri", "sat", "sun"};

    for(i = mon; i <= sun; i++){
        printf("%s\n", days[i]);
    }

    return 0;
}
