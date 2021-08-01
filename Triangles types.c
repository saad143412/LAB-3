#include<stdio.h>
void main()
{
	/*Programmer Name:Muhammad Saad
	  Reg.No:20MDELE163             */
  	 
	printf("Programmer Name:Muhammad Saad\nReg.No:20MDELE163\n\n");
	
	int A,B,C;
	printf("plz enter the three sides of a Triangle:");
	scanf("%d%d%d",&A,&B,&C);
	if(A==B&&B==C&&C==A)
	printf("The Triangle is Equilateral");
	else
	{
		if((A==B||B==C))
		printf("The Triangle is Isosceles");
		else
		printf("The Triangle is Scalene");
	}
	
	
}


