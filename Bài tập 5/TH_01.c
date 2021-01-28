#include <stdio.h>

int main()
{
    //Khai bao bien kieu float
   float a, b, c, x1, x2, x, delta;
            //Hien thi ra man hinh
            printf("Nhap a =\n");
            //Nhap so lieu tu ban phim
            scanf("%f", &a);
            //Hien thi ra man hinh
            printf("Nhap b =\n");
            //Nhap so lieu tu ban phim
            scanf("%f", &b);
            //Hien thi ra man hinh
            printf("Nhap c =\n");
            //Nhap so lieu tu ban phim
            scanf("%f", &c);
    if(a == 0)
    {       // phuong trinh bac 1
    if(b == 0 && c != 0)
            {
            printf("Phuong trinh vo nghiem\n");
            }
    else if(b == 0 && c == 0)
            {
            printf("Phuong trinh co vo so nghiem\n", x);
            }
    else
            {
            x= -c / b;
            printf("phuong trinh co nghiem = %f", x);
            }
    }
    else
    {       // phuong trinh bac 2
            delta = b * b - 4 * a * c;
    if(delta < 0)
            {
            printf("Phuong trinh vo nghiem");
            }
    else if(delta == 0)
            {
            x1 = -b / (a * 2);
            printf("Phuong trinh co nghiem kep = %f ", x1);
            }
    else
            {
            //Tinh x1, sqrt tra ve can bac 2
            x1 = (-b + sqrt(delta)) / (a * 2);
            //Tinh x2, sqrt tra ve can bac 2
            x2 = (-b - sqrt(delta)) / (a * 2);
            printf("Phuong trinh co nghiem\n x1 = %f\n x2= %f", x1, x2);
            }
    }
return 0;
