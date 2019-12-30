#include<stdio.h>

//function declaration
int mod(int x,int y);

int main()
{
	
    int x,y,GCD_of_two_no;
	
	//enter the two numbers
    printf("Enter any two number: ");
	scanf("%d%d",&x,&y);
    
    //calling a function gcd
    GCD_of_two_no=mod(x,y);
    printf("GCD of two no is %d",GCD_of_two_no);
}

//function definition 
int mod(int x, int y)
{
	int m,i;
	//check y==0   
    if(y==0)
    {
    	return x;
	}
    
    	
    //find smallest number between two integers
    if(x>y)
         m=y;
    else
         m=x;

    for(i=m;i>=1;i--)
	{
         if(x%i==0&&y%i==0)
		 {
             return i;
         }
    }
}
