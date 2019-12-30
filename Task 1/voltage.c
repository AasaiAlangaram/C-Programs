#include<stdio.h>

int main()
{
  int v;

  
  /*
  v2=voltage drop @r2 ,v3=voltage drop @r3, i1=total current,i2=current flowing through r2, i3=current flowing through r3,v=supply volatge,Tr=total resistance,Pr=product of resistance
  Sr=sum of resistance
  */
  float v2,v3,i1,i2,i3,i21,i31,R2,R3,Tr,Sr,Pr,Sr1,i;
  
    printf("Enter the voltage:");
  	scanf("%d",&v);
  
  for(i=0;i<3;i++)
  {
  	
    printf("\n\nEnter the value of R2 & R3:");
    scanf("%f",&R2);
    scanf("%f",&R3);
    //product of resistance
    Pr=(R2*R3);
    //sum of resistance
    Sr=(R2+R3);
    //Total resistance
    Tr=Pr/Sr;
    //printf("***********Total resistance is (product of resistance/sum of resistance)***********\n");
    //printf("Total Resistance is =%.2f ohms",Tr);
    
	//calculate I1 total current
	i1=v/Tr;
    //printf("I1 is %.2f Amps\n",i1);
    
    //current @ r2
    i2=(R3/Sr)*i1;
    //printf("I2 is %.2f Amps\n",i2);
    
    //current @ r3
    i3=(R2/Sr)*i1;
    //printf("I3 is %.2f Amps\n",i3);
    
    //volatge @ resistor R2
	v2=i2*R2;
    //printf("V2 is %.2f Volts\n",v2);
    
    //volatge @ resistor R3
	v3=i3*R3;
   // printf("V3 is %.2f Volts\n",v3);
    
    //printf("\t\t*****TABLE*****\n");
    printf("--------------------------------------------------------------\n");
    printf("E\t|R2\t|R3\t|V2\t|V3\t|I1\t|I2\t|I3   |\n");
    printf("--------------------------------------------------------------\n");
    printf("%dv\t|%.1f\t|%.1f\t|%.1fv\t|%.1fv\t|%.1fa\t|%.1fa\t|%.1fa |\n",v,R2,R3,v2,v3,i1,i2,i3);
    printf("--------------------------------------------------------------\n");
}
	return 0;
}

