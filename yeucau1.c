#include <stdio.h>

int main(){
    int n, tong = 0, i;
    ////tao ra mot bien tong gia tri ban dau = 0
    printf("Nhap so n bat ky: ");
    scanf("%d",&n);
    //nhap n tu ban phim
    for(i = 1 ; i < n ; i++) {
    	if(n % i == 0) {
    		tong = tong + i;
        //tinh tong cac uoc
    	}
    }
	if(tong == n) {
    //dem so sanh gia tri cua tong va n ban dau 
        printf("[%d] la so hoan hao",n);
         //neu bang nhau thi la so hoan hao
    } else {
        printf("[%d] khong phai la so hoan hao",n);
        //neu khong thi khong phai so hoan hao
    }
    return 0;
}
