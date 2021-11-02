#include <stdio.h>

int main() {
  int i;

  for (i = 1; i < 11; ++i)
  {
     
      if(i == 5 || i == 10 || i == 15)
      {
        continue;
      }
      printf("%d ", i);
  }
  return 0;
}