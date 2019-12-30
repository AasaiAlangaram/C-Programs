
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#define max 100000
// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
    /* create temp arrays */
    int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;
 
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
 
        merge(arr, l, m, r);
    }
}
 

/* Function to print an array */
void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
    
}
 

int main()
{
    int arr[max],a1[max],a2[max],a3[max] ;
    int n,a,b,c,i;
    time_t prg_begin1,prg_end1,prg_begin2,prg_end2,prg_begin3,prg_end3,prg_begin4,prg_end4;
    double t1,t2,t3,t4;
 	printf("Enter the size of the each array:");
 	scanf("%d%d%d%d",&n,&a,&b,&c);
    printf("Given array is \n");
    for(i=0;i<n;i++)
	{
		arr[i]=rand()%max;
	}
	 for(i=0;i<n;i++)
	{
		a1[i]=rand()%max;
	}
	 for(i=0;i<n;i++)
	{
		a2[i]=rand()%max;
	}
	 for(i=0;i<n;i++)
	{
		a3[i]=rand()%max;
	}
   	printArray(arr, n);

 		prg_begin1=clock();
    	mergeSort(arr, 0, n- 1);
    	prg_end1=clock();
   	
 		prg_begin2=clock();
    	mergeSort(a1, 0, a- 1);
    	prg_end2=clock();
    	t2=(double)(prg_end2-prg_begin2)/(double)CLK_TCK;
	
		
    	prg_begin3=clock();
    	mergeSort(a2, 0, b- 1);
    	prg_end3=clock();
    	t3=(double)(prg_end3-prg_begin3)/(double)CLK_TCK;
	
	
    	
    	prg_begin4=clock();
    	mergeSort(a3, 0, c- 1);
    	prg_end4=clock();
    	t4=(double)(prg_end4-prg_begin4)/(double)CLK_TCK;

		
		
    printf("\nSorted array is \n");
    printArray(arr, n);
    t1=(double)(prg_end1-prg_begin1)/(double)CLK_TCK;
	printf("\nTime taken to calculate sorting elapsed time of %d numbers: %lf",n,t1);
	
	printf("\nTime taken to calculate sorting elapsed time of %d numbers: %lf",a,t2);
	printf("\nTime taken to calculate sorting elapsed time of %d numbers: %lf",b,t3);
	printf("\nTime taken to calculate sorting elapsed time of %d numbers: %lf",c,t4);
    return 0;
}
