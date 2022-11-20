#include <stdio.h>
#include "NumClass.h"
int main()
{
	int num1,num2=0;
	int temp=0;
	scanf("%d%d",&num1,&num2);

if(num1>num2)
{
temp= num1;
num1=num2;
num2=temp;
}


	while (num1<0|| num2<0)
	{
		
		scanf("%d%d",&num1,&num2);
	
    }

    	if(num1>num2)
        {
         temp= num1;
         num1=num2;
         num2=temp;
         }
	
	
    printf("The Armstrong numbers are:");

    for (int j = num1; j<=num2; j++)
	{
		if (isArmstrong(j))

		{
			printf(" %d",j);
		}
	}

	   printf("\n"); 
	
	 printf("The Palindromes are:");


      for (int i = num1; i <=num2; i++)
	  {
		if (isPalindrome(i))
		{
			printf(" %d",i);
		}
	   }

	   printf("\n"); 

	
	

	printf("The Prime numbers are:");


	for (int i = num1; i <=num2; i++)
	{
		if(isPrime(i))
		{
			printf(" %d",i);
		}
		
	}

	printf("\n");


	  printf("The Strong numbers are:");


      for (int i = num1; i <=num2; i++)
	 {
		if (isStrong(i))
		{
			printf(" %d",i);
		}
	 }

		printf("\n");




	  return 0;


}
