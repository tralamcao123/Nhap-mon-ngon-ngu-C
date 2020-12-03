#include <stdio.h>

int main(void) {
  //khai bao bien DT,CV,R 
  double DT,CV,R;
  // gan gia tri bien R
  R = 1.5;
  // khai bao hang PI kieu double
  const double PI = 3.14;
  // gan gia tri DT,CV
  DT = R*R*PI;
  CV = 2*R*PI;
  // hien thi R, Cv, DT ra man hinh
  printf("CV\t DT\t R\n");
  printf(" %g\t  %g\t  %d",CV,DT);
  getchar();
  return 0;
}
