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
	
	//mua 5 sp giam 50%
	if(soluong>=5){
		if(dongia>=500000)
		printf("so tien can thanh toan la %d", thanhtien*50/100);
	}else{
		printf("so tien can thanh toan la %d", thanhtien);
	}
	
return 0;	
}
