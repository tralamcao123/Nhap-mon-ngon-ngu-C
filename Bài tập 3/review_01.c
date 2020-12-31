#include <stdio.h>

int main(void) {
  int n;
  printf("nhap so n =");
  //in ra dong nhap so n
  scanf("%d", &n);
  //nhap so n
if (n <= 1 )
{
	//hien thi chu tieng anh ra  man hinh 
	printf("one",n);
}	
else if (n <= 2)
{	
	printf("two",n);
}
else if (n <= 3)
{
	printf("three",n);
}
else if (n <= 4)
{
	printf("four",n);
}
else if (n <= 5)
{
	printf("five",n);
}
else if (n <= 6)
{
	printf("six",n);
}
else if (n <= 7)
{
	printf("seven",n);
}
else if (n <= 8)
{
	printf("eight",n);
}
else if (n <= 9)
{
	printf("nine",n);
}
else if (n > 9)
{
	printf("greater than 9",n);
}

  return 0;
}
