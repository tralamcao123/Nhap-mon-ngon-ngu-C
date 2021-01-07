#include <stdio.h>

int main()
{           //Khai bao bien kieu int 
    int a, b, c;
            //Hien thi ra man hinh
            printf("Nhap a =\n");
            //Nhap so lieu tu ban phim
            scanf("%d", &a);
            //Hien thi ra man hinh
            printf("Nhap b =\n");
            //Nhap so lieu tu ban phim
            scanf("%d", &b);
            //Hien thi ra man hinh
            printf("Nhap c =\n");
            //Nhap so lieu tu ban phim
            scanf("%d", &c);
    // xac dinh a, b, c co phai la 3 canh cua tam giac        
    if((a - c) < b && b < (a + c))
            {
            printf("La 3 canh cua tam giac");
            }
    else
            {
            printf("Khong phai la 3 canh cua tam giac");
            }
return 0;
}
