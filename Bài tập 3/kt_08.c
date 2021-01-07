#include <stdio.h>


int main()
{

        //Khai bao bien kieu float
    float a, b;
        //Hien thi ra man hinh so thuc thu 1
        printf("Nhap vao so thuc thu nhat:\n");
        //Nhap mot so tu ban phim
        scanf("%f",&a);
        //Hien thi ra man hinh so thuc thu 2
        printf("Nhap vao so thuc thu hai:\n");
        //Nhap mot so tu ban phim
        scanf("%f",&b);
        //Tinh tong
    float tong = a * b;
        //Vong lap if cung dau
    if (tong > 0)
        {
        printf("%0.1f va %0.1f cung dau", a, b);
        }
        //Vong lap else if trai dau
    else if (tong < 0)
        {
        printf("%0.1f va %0.1f trai dau", a, b);
        }
return 0;
}
