#include<stdio.h>

int main(){
	
	//khai bao bien soluong, dongia, thanhtien
	int soluong, dongia, thanhtien;
	
	//nhap gia tri don gia
	printf("nhap dongia =");
	scanf("%d", &dongia);
	
	//nhap gia tri soluong
	printf("nhap soluong =");
	scanf("%d", &soluong);
	
	thanhtien = dongia * soluong;
	
	//mua 5 sp giam 25%
	if(soluong>=5){
		printf("so tien can thanh toan la %d", thanhtien*75/100);
	}else{
		printf("so tien can thanh toan la %d", thanhtien);
	}
	
return 0;	
}
