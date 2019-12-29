#include<stdio.h>

int main()
{
	int r1;
	int r2;
	int v=10,i;
	float v2,v3,i1,i2,i3,i21,i31,Tr,Sr,Pr,Sr1;
	
	printf("_____________________________________________________________________\n");
    printf("E\t|R2\t|R3\t|V2\t|V3\t|I1\t|I2\t|I3   \n"); 
    printf("_____________________________________________________________________\n");
    for(r1=1;r1<6;r1++)
    {
	for(r2=1;r2<6;r2++)
	{
	//product of resistance
    Pr=(r1*r2);
    //sum of resistance
    Sr=(r1+r2);
    //Total resistance
    Tr=Pr/Sr;
    //calculate I1 total current
	i1=v/Tr;
    //printf("I1 is %.2f Amps\n",i1);
    
    //current @ r2
    i2=(r2/Sr)*i1;
    //printf("I2 is %.2f Amps\n",i2);
    
    //current @ r3
    i3=(r1/Sr)*i1;
    //printf("I3 is %.2f Amps\n",i3);
    
    //volatge @ resistor R2
	v2=i2*r1;
    //printf("V2 is %.2f Volts\n",v2);
    
    //volatge @ resistor R3
	v3=i3*r2;

    
    printf("%dv\t|%d\t|%d\t|%.1fv\t|%.1fv\t|%.1fa\t|%.1fa\t|%.1fa \n",v,r1,r2,v2,v3,i1,i2,i3);
    printf("_____________________________________________________________________\n");
}
}
}
