#include <stdio.h>

int LN_n(int n, int arr[]) {
int lonnhat = 0;
  for (int i = 0; i < n; i++){
    if (arr[i] > lonnhat) {
      lonnhat = arr[i];
      //khi arr[i] mà lơn hơn lonnhat thì gán giá trị arr[i] cho lớn nhất
      //vòng lặp sẽ tăng liên tục cho đến khi tìm ra giá trị lớn nhất
    }
  }
  return lonnhat;
  //trả về lonnhat (lonnhat = 1)
}

int giaithua (int n, int arr[]) {
int giaithua = 1;
//cho giaithua = 1 dể khi * còn có giá trị
  for (int i = 0; i < n; i++) {
    giaithua *=  arr[i];
    //giaithua = giaithua * arr[i] tính giai thừa
  }
  return giaithua;
  //trả giá trị về giaithua (giaithua = 1);
}

int main () {
  printf ("nhap n = ");
  int n;
  scanf ("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    printf ("gia tri mang %d = ", i);
    scanf ("%d", &arr[i]);
  }
  //khai báo giá trị. Nhập số n và arr[] từ bàn phím
  printf ("phan tu lon nhat = %d\n", LN_n(n, arr));
  printf ("gia thua cua n = %d", giaithua(n, arr));
  //hiển thị phần tử lớn nhất và giai thừa ra màn hình
}
