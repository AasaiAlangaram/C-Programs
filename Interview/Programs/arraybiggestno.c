#include<stdio.h>  
  
#define N 5  
  
int main()  
{  
    int a[N], i, fbig, sbig;  
  
    if(N < 3)  
    {  
        printf("Please have an array with at least 2 elements\n");  
        return(0);  
    }  
  
    printf("Enter %d unique integer numbers\n", N);  
    for(i = 0; i < N; i++)  
        scanf("%d", &a[i]);  
  
    (a[0] > a[1]) ? (fbig = a[0], sbig = a[1]) :  
                    (fbig = a[1], sbig = a[0]);  
  
    for(i = 2; i < N; i++)  
    {  
        if(fbig < a[i])  
        {  
            sbig = fbig;  
            fbig = a[i];  
        }  
        else if(sbig < a[i])  
        {  
            sbig = a[i];  
        }  
    }  
  
    printf("First Big: %d\nSecond Big: %d\n", fbig, sbig);  
  
    return 0;  
}  