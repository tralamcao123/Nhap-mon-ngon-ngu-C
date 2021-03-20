#include <stdio.h>
 
 //Tim uoc chung lon nhat
int UCLN(int a, int b) {
    if (b == 0) 
    return a;
    return UCLN(b, a % b);
}
int main() 
{
 int a, b;
    printf("Nhap a = ");
    scanf("%d", &a);
    printf("Nhap b = ");
    scanf("%d", &b);
    // tinh USCLN cua a va b
    printf("UCLN cua %d va %d la: %d", a, b, UCLN(a, b));
    
}
