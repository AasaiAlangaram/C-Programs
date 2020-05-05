#include <stdio.h> 


int main() 
{
    printf("--Unroll Small loops--\n");        
    
    int a[] = {1,2,3}, i = 0;
    
    for(i=0;i<3;i++)
    {
        a[i] = i * 2;
        printf("a[%d] : %d\n",i,a[i]);
    }
    
    return 0; 
} 
