#include <stdio.h>
#include <math.h>
#include "NumClass.h"


int count_digits(int);
int palindrome_Check(int, int);
long isArmstrong_Check(int num, int power);



int isArmstrong(int num)
{
	int temp=num;

	int temp2=num;
    int digits= count_digits(temp);

	if(isArmstrong_Check(temp2,digits)==(long)num)
	{
		return 1;
	}

	else
	{
		return 0;
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

int palindrome_Check(int temp,int sum)
{
	if (temp==0)
	{
		return 0;
	}
	int digit=0;
    if (temp!=0)
{
	digit=temp%10;
	sum=(sum*10)+digit;
     palindrome_Check(temp/10,sum);
}
	return sum;

}



