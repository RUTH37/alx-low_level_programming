#include <stdio.h>

/**
 * main - program that prints the numbers from 1 to 100
 * But for multiples of three print Fizz
 * and for the mutiples of five print Buzz
 * Return: 0
 */

int main(void)
{

	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i == 100)
		{
			printf("Buzz");
		}
		else
			printf("%i", i);
	}
	putchar("\n");
	return (0);
}
