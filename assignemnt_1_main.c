#include <stdio.h>

int main()
{
	int num1,num2=0;
	int temp=0;
	printf("please enter a numbers:\n");
	scanf("%d%d",&num1,&num2);

if(num1>num2)
{
temp= num1;
num1=num2;
num2=num1;
}


	while (num1<0|| num2<0)
	{
		printf("please enter a valid numbers:\n");
		scanf("%d%d",&num1,&num2);
	
    }

    	if(num1>num2)
        {
         temp= num1;
         num1=num2;
         num2=num1;
         }

	printf("The Prime numbers between %d,%d :",num1,num2);


	for (int i = num1; i <=num2; i++)
	{
		if(isPrime(i))
		{
			printf("  %d",i);
		}
		
	}

	printf("\n");

    printf("The Armstrong numbers between %d,%d :",num1,num2);

    for (int j = num1; j<=num2; j++)
	{
		if (isArmstrong(j))

		{
			printf(" %d",j);
		}
	}

	   printf("\n"); 

	   

	  printf("The strong numbers between %d,%d :",num1,num2);


      for (int i = num1; i <=num2; i++)
	 {
		if (isStrong(i))
		{
			printf("  %d",i);
		}
	 }

		printf("\n");


	 printf("The polindrome numbers between %d,%d :",num1,num2);


      for (int i = num1; i <=num2; i++)
	  {
		if (isPalindrome(i))
		{
			printf("  %d",i);
		}
	   }

	   printf("\n"); 

	  return 0;


}
