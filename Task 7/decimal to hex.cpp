
#include<stdio.h>
#include<math.h>
 
int decimal_to_hexadecimal(int x)
{
      int hexadecimal_number, remainder, count = 0;
      for(count = 0; x > 0; count++)
      {
            remainder = x % 16;
            hexadecimal_number = hexadecimal_number + remainder * pow(10, count);
            x = x / 16;
      }
      return hexadecimal_number;
}
 
int main()
{
      int decimal_number, result;
      printf("Enter a Decimal Number:\t");
      scanf("%d", &decimal_number); 
      result = decimal_to_hexadecimal(decimal_number); 
      printf("\nHexadecimal Equivalent:\t%d\n", result);
      return 0;
}
