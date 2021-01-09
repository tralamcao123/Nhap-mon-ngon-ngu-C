#include<stdio.h>
int main(){
    int n; //so dc nhap
    int i;//số được tách ra sau khi nhập
    int s = 0; 
    printf("Nhap n: ");
    scanf("%d",&n);
    for(;n!=0;){ //n khac 0 bat dau vong lap
        i = n % 10; //chia 10 để lấy phần dư 
        s += i;     // s +=i   0+ phan du
        n /= 10;     // n=n/10
    }    
    printf("%d",s); //hien thi ket qua sau qua trinh lap
}
