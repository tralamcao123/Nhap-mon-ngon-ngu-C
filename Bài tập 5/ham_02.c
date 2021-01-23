//****************************************CODE**********
//Khoi khai bao
#include<stdio.h>
//khai bao ham kiem tra am duong
int kiem_tra_am_duong (int n){
  return n;
//trả về n và xét n theo điều kiện bên dưới n nhập từ bạn phím
}

 //khoi ham main
int main(){
  int n;
  printf("Nhap n = ");
  scanf("%d", &n);
  if(kiem_tra_am_duong(n) > 0)
      printf("n la so nguyen duong ");
  else if (kiem_tra_am_duong(n) < 0)
    printf("n la so nguyen âm");
  else 
    printf("n = 0");
  return 0;
}

// khoi dinh nghia ham

//*************************END CODE*****************************
