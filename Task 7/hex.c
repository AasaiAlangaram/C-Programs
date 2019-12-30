#include<stdio.h>
#include<math.h>
int hexadecimal_to_decimal(int x)
{
      int decimal_number, remainder, count = 0;
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
	int a,b,decimal;
	printf("Enter the hexadecimal value:");
	scanf("%X",&a);
	//printf("Enter the hexadecimal value to module:");
	//scanf("%X",&b);
	decimal=hexadecimal_to_decimal(a);
	printf("Equivalent decimal no:");
	printf("%d",decimal);
	return 0;
	
}
