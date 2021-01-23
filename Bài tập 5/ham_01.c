  
#include <stdio.h>

int sum (int a, int b, int c) {
  int sum = 0;
  sum = a + b + c;
  return sum;
  //trả sum về ban đầu (sum = 0)
}
//tính toán dùng hàm int vì int có return
void tong (int a, int b, int c) {
  int sum = 0;
  printf ("(ham void) tong cua a, b, c = %d\n", a + b + c);
}
//nếu không có tính toán thì dùng hàm void vì không có return
int main () {
  int a, b, c;
  printf ("Nhap a = ");
  scanf ("%d", &a);
  printf ("Nhap b = ");
  scanf ("%d", &b);
  printf ("Nhap c = ");
  scanf ("%d", &c);
  tong (a, b, c);
  //gọi lại hàm void tong để hiển thị hàm đó ra màn hình
  printf ("(ham int) tong cua a, b, c = %d", sum (a, b, c));
  //printf gọi là hàm sum (hiển thị hàm sum ra màn hình)
  return 0;
}
