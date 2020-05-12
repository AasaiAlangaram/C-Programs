/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    for(int i = 0; i<16;i++)
    {
        printf("\nStarted -> %d loop\n",i);
        printf("%d ",i%2);printf("%d\n",i/2);
        if(i%2)
        {
            printf("If  ");
            printf("%0*d\n",(i/2)+1,1);
        }
        else
        {
            printf("Else  ");
            printf("%c\n",58);
        }
        
        printf("Completed -> %d loop\n",i);
    }

    return 0;
}
