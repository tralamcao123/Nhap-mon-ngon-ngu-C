#include <stdio.h>

int main(){
	
	int n;
	printf("nhap n = ");
	//nhap so n tu ban phim
	scanf("%d",&n);
 if(n > 0){
    
    if(n % 2 ==0){
      //hien thi so chan
      printf("%d la so chan",n);
    } else{
    	//hien thi so le
      printf("%d la so le",n);
    }
    }else if(n==0){
    	//hien thi so bang 0
      printf("%d bang 0",n);
    }
getchar();
return 0;
}   
