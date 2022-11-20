#include <stdio.h>
#include "NumClass.h"


double pow(double  num,  double power)
{  
	if(power==0)
	{
	return 1;
	}
	if(power==1)
	{
        return num;
	}
	else
	{
		return num* pow(num,power-1);
	}

}

int isArmstrong(int num)

{
	if(num<0)
		return 0;

int temp =num ;
int temp2=num;
int count=0;
int digit =0;
int sum=0;

while(temp>0)
{
count++;
temp=temp/10;
}



while(temp2>0)
{
 digit=temp2%10;
 sum=sum+pow(digit,count);
 temp2=temp2/10;
}
if(sum==num)
{
	return 1;
}
else
{
	return 0;
}

}


int isPalindrome(int num)
{
  int temp=num,digit=0,sum=0;
   if ((num>=0 )&& (num<10))
	{
		return 1;
	}	

while(temp>0)
{
digit=temp%10;
sum=(sum*10)+digit;
temp=temp/10;
}
if (num==sum)
{
	return 1;
}
else
{
	return 0;
}

} 

