#include<stdio.h>

int main () {
int h;
    printf("nhap h: ");
    scanf("%d",&h);
  //nhập tọa độ cao h từ bàn phím
    for(int i = 1; i <= h; i++) {
    //cho vòng lặp từ 1 tới h và tăng dần 1 giá trị
        for(int j = 1; j <= h - i; j++)
        //vòng lặp bắt đầu từ 1 và kết thúc ở h - i (i tăng dần 1 giá trị). Có nghĩa là khoảng trống sẽ giảm dần.
            printf("   ");
            //hiển thị khoảng trống ra màn hình
        for(int j = 1; j <= 2 * i - 1; j++)
        //vòng lặp bắt đầu từ 1 và kết thúc ở 2 * i -1. (i tăng dần 1 giá trị). Khi 2 * i -1 thì dấu * sẽ tăng dần theo i
        //không có cái tam giác nào là 1 2 4 6 8 cả nên phải trừ đi 1 thành 1 3 5 7 9.
            printf(" * ");
            // hiển thị dấu * ra màn hình
    printf("\n");
    // xuống dòng khi kết thúc 1 lần của vòng lặo
}
    return 0;
}
