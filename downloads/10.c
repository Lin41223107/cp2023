#include <stdio.h>
#define N 10

int main() {
  char chr;
  printf("\n");

  // Loop through ASCII values from 65 ('A') to 122 ('z')
  for (chr = 50; chr <= 100; chr = chr + 2) {
    // Exclude characters between 'Z' and 'a'
    if (chr > 90 && chr < 97)
      continue;

    printf("[%2d-%c] ", chr, chr);
  }

  return 0;
}