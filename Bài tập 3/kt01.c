#include<stdio.h>
int main (){
  int a, b, c;
  a = 2, b = 3, c = 4;
  printf("Bang Cuu Chuong 2\n");
  //hiển thị bảng cưu chương 2 ra màn hình dể dễ nhìn hơn
  for (int i = 1; i <= 10; i++){
  //vòng lặp bắt đầu từ 1 đén 10 và tăng dần 1 giá trị
    printf("   %d * %d = %d\n", a, i, a * i);
    //a * i và i tăng dần 1 giá trị và hiển thị ra màn hình
    //Các dòng dưới tương tự
  }
  printf("Bang Cuu Chuong 3\n");
  for (int i = 1; i <= 10; i++){
    printf("   %d * %d = %d\n", b, i, b * i);
  }
  printf("Bang Cuu Chuong 4\n");
  for (int i = 1; i <= 10; i++){
    printf("   %d * %d = %d\n", c, i, c * i);
  }
    return 0; 
}
