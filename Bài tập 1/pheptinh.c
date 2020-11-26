#include<stdio.h>

int main(){
	//khai bao bien a, b kieu int
	int a,b;
	//khai bao bien a
	a = 3;
	//khai bao bien b
	b = 5;
	// khai bao bien tong, hieu, thuong, tich
	int tong, hieu, tich;
	double thuong;
	//Gan tong = a+b, hieu = a-b, tich = a*b, thuong=a/b
	tong = a + b;
	hieu = a - b;
	tich = a * b;
	thuong = (double)a / b;
	//Hien thi cac bien tong, hieu, tich, thuong theo dinh dang: a + b = 8, a-b =-2, a*b=15, a/b=0
	printf("a + b =%d, a - b = %d, a * b =%d,a / b = %0.1f",tong, hieu, tich, thuong);
	//Thay đoi khai bao bien thuong va ap dung ep kieu de ket qua a/b = 0.6
	return 0;
	
}
