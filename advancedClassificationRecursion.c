#include <stdio.h>
#include "NumClass.h"


int count_digits(int);
int palindrome_Check(int, int);
long isArmstrong_Check(int num, int power);



int isArmstrong(int num)
{
	int temp=num;

	int temp2=num;
    int digits= count_digits(temp);
	
return isArmstrong_Check(temp2,digits)==(long)num;
	
	}

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

long isArmstrong_Check(int num, int power)
{

	if (num<=0)
	{

		return 0;
	}
   return (pow(num%10,power)+isArmstrong_Check(num/10,power));
}



int count_digits(int num)
{
if (num>0)
{
	return  1+ count_digits(num/10);
}
return 0;
}

int isPalindrome(int num)
{
	int temp= num;
	if(num==palindrome_Check(temp,0))
	{
		return 1;

	}
	else
	{
		return 0;
	}
}

int result;
int digit=0;
int palindrome_Check(int temp,int result)
{
	if (temp==0)
	{
		return result;
	}
	

	digit=temp%10;
	result =(result*10)+digit;
     return palindrome_Check(temp/10,result);

}



