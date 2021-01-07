#include <stdio.h>

int main ()
{
	//Khai bao bien i va n
int i, n;
	//Hien thi ra man hinh chu Nhap so
	printf("Nhap so \n");
	//Nhap mot so ra tu ban phim
	scanf("%d",&n);
        {
    //Hien thi dong chu so le ra man hinh
    printf("So le \n");
        }
    {
    //Vong lap so le
for(i = 1; i <= n; i = i + 2)
if(i <= n )
        {
    //Hien thi ket qua ra man hinh
    printf("%d ",i);
        }
    }
        {
    //Hien thi ra dong chu So chan ra man hinh
    printf("\nSo Chan \n");
        }
    {
    //Vong lap so chan
    for(i = 2; i <= n; i = i = i + 2)

	if ( i <= n)
        {
        //Hien thi ket qua ra man hinh
		printf("%d ",i);
        }
    }
return 0;
}
