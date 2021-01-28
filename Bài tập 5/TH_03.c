#include<stdio.h>

//khai bao ham
int So_lon_nhat_la ();
int main() {
	int a, b, c;

  //nhap gia tri a, b, c
    printf("nhap a : ");
    scanf("%d", &a);
    printf("nhap b : ");
    scanf("%d", &b);
    printf("nhap c : ");
    scanf("%d", &c);
    
    // dieu kien so lon nhat
	if(a>b && a>c)
   printf("so lon nhat : %d",a);
  
   if (b>a && b>c)
   printf("so lon nhat : %d",b);
  
   if (c>a && c>b)
   
   printf("so lon nhat : %d",c);
   return 0;
}

int So_lon_nhat_la (){
	return 0;
}
