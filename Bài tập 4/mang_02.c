#include <stdio.h>
 
int main(){
    int a[100],n,tong;
    tong = 0;
    printf("Nhap n:");scanf("%d",&n);
    for(n = 0; n < 100; n++)
    printf("%d\n",a[n]);
    for(n = 0; n < 100; n++)
    tong = tong + a[n];
    printf("Tong = %d",tong);
    getchar();
    return 0;
}
