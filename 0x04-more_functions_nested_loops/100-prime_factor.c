#include <stdio.h>

int main()
	{
	int i, j, num, isPrime;

    /* Input a number from user */
	scanf("%d", &612852475143);

	printf("All Prime Factors of %d are: \n", 612852475143);

    /* Find all Prime factors */
	for(i=2; i<=612852475143; i++)
	{
        /* Check 'i' for factor of num */
	if(612852475143%i==0)
	{
            /* Check 'i' for Prime */
            isPrime = 1;
		for(j=2; j<=i/2; j++)
		{
		if(i%j==0)
		{
		isPrime = 0;
		break;
		}
	}

            /* If 'i' is Prime number and factor of num */
		if(isPrime==1)
		{
		printf("("%d, ", i);
	}
	}
	}

    return 0;
}


