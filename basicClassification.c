#include <stdio.h>
#include "NumClass.h"

long factorial(int);

int isPrime (int num)
{
	if (num<0|| num==0)
	{
		return 0;
	}
	int count=0;

	for(int i=2;i<num;i++)
	{
	   if(num%i==0)
	   count=count+1;

	}

	if(count>0)
	{
	   return 0;

	}
	else
	{
		return 1;
	}

	
}


int isStrong(int num)
{  
	if (num<0)
	{
		return 0;
	}
   int originalnum=num;
   int digit=0;
   long sum=0;
	while(num>0)
	{
     digit=num%10;
     sum= sum + factorial(digit);
     num=num/10;
	}

	if(sum!=originalnum)
	{
	return 0;
	}
	else
	{
return 1;
	}
}
	

	

long factorial(int f)
{
    long factrioalN=1;

	for(int i=2;i<=f;i++)
{
    factrioalN = factrioalN * i;
}

     return factrioalN;
}


