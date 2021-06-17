
#include <stdio.h>
#include <math.h>

void dectobin(int n)
{
    int i=0,arr[32]={0},count=0,rem= 0;

    while(n)
    {
        arr[count++] = n%2;
        n = n/2;
        //printf("%d ",count);
       
    }

    for(i=count-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    
}
#if 1
void bintodec(int n)
{
    int dec = 0,i=0;
    while(n!=0)
    {
        dec = dec + (n%10 * pow(2,i));
        n = n/10;
        i++;
    }
    printf("%d",dec);
}
#endif

// Function to convert binary to decimal
int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}


int main()
{
    long long bin = 1000;
    int dec = 15;
    
    dectobin(dec);
    //printf("%d",binaryToDecimal(bin));
    bintodec(bin);
    return 0;
}
