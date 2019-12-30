
#include<stdio.h>
#include<math.h>
 
unsigned long long int hexadecimal_to_decimal(unsigned long long int x)
{
      unsigned long long int decimal_number, remainder, count = 0;
      while(x > 0)
      {
            remainder = x % 10;
            decimal_number = decimal_number + remainder * pow(16, count);
            x = x / 10;
            count++;
      }
      return decimal_number;
}
 
int main()
{
      unsigned long long int hexadecimal_number, result;
      printf("Enter a Hexadecimal Number:\t");
      scanf("%ul", &hexadecimal_number); 
      result = hexadecimal_to_decimal(hexadecimal_number); 
      printf("\nDecimal Equivalent:\t%ul\n", result);
      return 0;
}
