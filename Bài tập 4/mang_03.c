#include <stdio.h>

int main () {
  int a[100];
  int n;
  printf ("Nhap n = ");
  scanf ("%d", &n);
  for (int i = 0; i < n; i++) {
    printf("Nhap phan tu %d = ", i + 1);
    scanf("%d", &a[i]);
    //nhâp các số trong mảng
  }
    printf ("Mang a: ");
    for (int i = 0; i < n; i++) {
    printf ("%d ", a[i]);
    //hiển thị các số có trong mảng ra màn hình
  }
    printf ("\n");
  int chan, le, e, g, so;
  chan = 0, le = 0, e = 0, g = 0, so = 0;
  printf ("Dem cac so le: ");
  // bỏ ngoài vòng lặp chứ 0 thì bị lặp liên tục
  for (int i = 0; i < n; i++) {
    if (a[i] % 2 != 0) {
    // nếu a[i] chia hết cho 2 khác0 thì là số lẻ
      le += a[i];
      //le = le + a[i] (tổng các số lẻ)
      g++;
      //g = g + 1 (đếm các số lẻ)
    }
  }
    printf ("%d", g);
    //hiển thị đếm các số lẻ
  printf("\nDem cac so chan: ");
  //bỏ ngoài vòng lặp nếu 0 sẽ bị lặp liên tục
  for (int i = 0; i < n; i++) {
    if (a[i] % 2 == 0 && a[i] != 0) {
    //nếu a[i] chia hết cho 2 dư 0 thì là số chẳn
      chan += a[i];
      //chan = chan + a[i] (tổng các số chăn)
      e++;
      //e = e + 1
    }
  }
  printf ("%d", e);
  //hiển thị đếm các số lẻ ra màn hình 
  printf("\nDem cac so 0: ");
  for (int i = 0; i < n; i++) {
    if (a[i] == 0) {
      so++;
    }
  }
  printf ("%d", so);
  //hiển thị đếm các số 0 ra màn hình 
  printf ("\nTong cac so le: %d\n", le);
  printf ("Tong cac so chan: %d", chan);
  return  0;
}
