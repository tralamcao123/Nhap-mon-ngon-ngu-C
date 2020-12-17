#include <stdio.h>

int main(void) {
 	int thang;
  printf("nhap thang: ");
  scanf("%c",&thang);
  switch(thang){
    case 2:
      printf("28 ngay");break;
    case 1,3,5,7,8,10,12:
      printf("31 ngay");break;
    case 4,6,9,11:
    	printf("30 ngay");break;
    default:
      printf("vui long nhap thang");
  }
  return 0;
}
