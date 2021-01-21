#include <stdio.h>

int main () {
  int a[4];
  //mảng bắt đầu từ 0 và kết thúc ở bé hơn 4 
  printf("nhap 4 so a tu ban phim: ");
  //hiển thị nhap 4 so tu ban phim ra màn hình
  for (int i = 0; i < 4; i++) {
  //vong lặp bắt đầu từ 0 và bé hơn 4 theo mang[4]
    scanf("%d", &a[i]);
    //nhập số của mảng từ bàn phím
  }
  int sum = 0;
  for (int i = 0; i < 4; i++) {
  //lặp lại vòng lặp i
    sum += a[i];
    //tính tổng các số trong mảng a[i]
  }
    printf("tong la: %d ", sum);
    //xuất các giá trị có trong mảng ra màn hình 
  return  0;
}
