#include "main.h"
#include <stdio.h>
/**
 * mainz- identifes multiple of 3 and 5 and both
 *
 * Return: Return always 0
 */
void mainz(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{	
		if ((a % 3) == 0 && (a % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((a % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((a % 5) == 0)
		{
			if (a == 100)
			{
				printf("Buzz\n");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else
		{
		printf("%d ", a);
		}
	}
}
