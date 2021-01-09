cau a tam giac dac
#include <stdio.h>
int main()
{
    int n; int q = 0;
    
    printf("Nhap chieu cao tam giac cua tam giac: \n");
    scanf("%d",&n);

    while (n > 0)
    {
        for (int i = 1; i<n; i++)
            printf("%c ", ' ');
        for (int k = 0; k <= q; k ++)
            printf("%c ", '*');
        n -- ;
        q += 2 ;
        printf("\n");
    }

    return 0;

}
  
  
cau b tam giac rong nam giua man hinh
#include <stdio.h>
int main()
{
    int n; int q = 0;
    printf("Nhap chieu cao tam giac cua tam giac: \n");
    scanf("%d",&n);
    int a = n-2;

    for (int c = 1; c < n; c ++)
        printf("%c",' ');
    printf("%c",'*');
    printf("\n");

    while (a > 0)
    {
        for (int i = 0; i<a; i++)
            printf("%c", ' ');
        printf("%c", '*');
        for (int k = 0; k <= q; k ++)
            printf("%c", ' ');
        printf("%c", '*');
        a -- ;
        q += 2;
        printf("\n");
    }
        for (int b = 2*n-1; b > 0; b --)
            printf("%c",'*');


    return 0;
}
#include <stdio.h>

int main() {
   int n,m,h,i;
   printf("nhap h=");
   scanf("%d",&h);
 for (i=1;i<=h;i++){
   for (n=1;n<=h-i;n++)
printf(" ");
   for (m=1; m <= 2*i-1 ;m++)
   printf("*");
   
   printf("\n");
 }
 }
