#include<stdio.h>


int main()
{
    int i, n;
    float S;
    S = 0; i = 1;
    do
    {
        printf("\nNhap n: ");
        scanf("%d", &n);
        if(n < 1)
        {
            printf("\nN phai lon hon hoac bang 1. Xin nhap lai !");
        }

    }while(n < 1);

    while(i <= n)
    {
        S = S + 1.0 / i;  // phải nhớ là 1.0 / i
        i++;
    }
    printf("i = %d", i);
    printf("\nS = %f", S);
    printf("\nTong 1 + 1/2 + ... + 1/%d la %.2f: ",n, S);

 
    return 0;
}
