#include<stdio.h>
int main(){
	char pt;
	int a = 5, b = 3;
	printf("nhap phep tinh: ");
	scanf("%c",&pt);
	if(pt=='+'){
		printf("a+b=%d", a+b);
	}else if(pt=='-'){
	printf("a-b=%d", a-b);
	}else{printf("vui long nhap phep tinh");
	}
return 0;
}
