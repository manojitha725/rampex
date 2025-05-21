#include <stdio.h>

int countDigits(int n) {
  int count = 0;
  if (n == 0) {
    return 1;
  }
  while (n != 0) {
    n /= 10;
    count++;
  }
  return count;
}

int main() {
  int num;
  printf("Enter an integer: ");
  scanf("%d", &num);
  printf("Number of digits: %d\n", countDigits(num));
  return 0;
}




