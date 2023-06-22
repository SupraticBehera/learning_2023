/* 2. Prints Bits:
Scan a 32bit integer and prints its bits.

Concepts to be used.
- Loops
- Bitwise Operators */

#include <stdio.h>

void print_bits(unsigned int n) {
  for (int i = 31; i >= 0; i--) {
    printf("%d", (n >> i) & 1);
  }
  printf("\n");
}

int main() {
  unsigned int n;
  printf("Enter a 32-bit integer: ");
  scanf("%u", &n);

  print_bits(n);

  return 0;
}