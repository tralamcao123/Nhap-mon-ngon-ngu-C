#include <stdio.h>

int main(void) {
int dongia, soluong, thanhtien;
// nhập các biến cần thiết
  printf("nhập đơn giá\n");
// hiển thị ra màn hình dòng nhập đơn giá
scanf("%d", &dongia);
  printf("nhập số lượng\n");
// hiển thị ra màn hình dòng nhập số lượng
scanf("%d", &soluong);
// dùng lệnh scanf để gán giá trị cho biến
thanhtien = dongia * soluong;
if (soluong >= 5 && dongia >= 500){
  printf("số tiền cần phải thanh toán là %d", thanhtien * 50/100);
// nếu số lượng mua nhỏ hơn lơn hơn hoặc bằng 5 và đơn giá lơn hơn hoặc băng 500 thì sẽ giảm giá 50%
}else{
  printf("số tiền cần phải thanh toán là %d", thanhtien);
// Ngược lại số lượng nhỏ hơn 5 thì sẽ không giảm giá
}
  return 0;
}
