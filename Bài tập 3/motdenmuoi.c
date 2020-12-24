#include <stdio.h>

int main() {
  int dem;
  for(dem = 1; dem <= 10; dem = dem + 1)
	printf("%d \n", dem);
  for(dem = 1; dem <= 10; dem = dem + 1)
	printf(" %d ", dem);
  return 0;
}
