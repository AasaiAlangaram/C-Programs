
#include <stdio.h>
 
int main()
{
  int fArray[25];
  int frow, fcolumn, srow, scolumn, c, d, k,p,l, mul = 0,sum=0,i,j;
  int first[10][10], second[10][10], multiply[10][10],add[10][10];
 
  FILE *fptr;
  FILE *sptr;
  fptr = fopen("c:\\input.txt","r");

  
 for (i =0; i <22 ; i++)
    {
   fscanf(fptr,"%d", &fArray[i]);
   
}

   
   fclose(fptr); 
  frow=fArray[0]; fcolumn=fArray[1]; srow=fArray[11]; scolumn=fArray[12];

 k=2; 
 for(i=0;i<3;i++)
 {
 	for(j=0;j<3;j++)
 	{
 		first[i][j]=fArray[k];
 		k++;
 		
	 }
 }
 k=0;

 k=13;
 for(p=0;p<3;p++)
 {
 	for(l=0;l<3;l++)
 	{
 		second[p][l]=fArray[k];
 		k++;
 		
	 }
 }
 

    for (c = 0; c < frow; c++) {
      for (d = 0; d < scolumn; d++) {
	  for (k = 0; k < srow; k++) {
          mul = mul + first[c][k]*second[k][d];
        }
 
        multiply[c][d] = mul;
        mul = 0;
      }
    }
    
        printf("Product of the matrices:\n");
 
    for (c = 0; c < frow; c++) {
      for (d = 0; d < scolumn; d++)
        printf("%d\t", multiply[c][d]);

      printf("\n");
    }
    for(c=0;c<frow;c++)
    {
    	for(d=0;d<srow;d++)
    	{
    		sum= sum+(first[c][d]+second[c][d]);
		
		add[c][d]=sum;
		sum=0;
	}	
	}
		printf("sum of  matrices :\n");
	for(i=0;i<frow;i++)
	{
		for(j=0;j<scolumn;j++)
		{
			printf("%d\t",add[i][j]);
			
		}
		printf("\n");
	}
	sptr = fopen("C:\\output.txt","w");


	
	fprintf(sptr,"%s\n","SUM OF MATRIX");
	for(i=0;i<frow;i++)
	{
		for(j=0;j<scolumn;j++)
		{
		
			fprintf(sptr,"%d\t",add[i][j]);
			
		}
		fprintf(sptr,"\n");
	}
 
   fprintf(sptr,"\n");
   fprintf(sptr,"%s\n","PRODUCT OF MATRIX");
 
    for (c = 0; c < srow; c++) {
      for (d = 0; d < scolumn; d++){
      	

        fprintf(sptr,"%d\t", multiply[c][d]);

      
    }
    fprintf(sptr,"\n");
}
    fclose(sptr);
  
  return 0;
}

   

