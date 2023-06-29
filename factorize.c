#include "main.h"

/**
 * factorize - Factorizes an integer
 * @num: An integer scanned from the file.
 *
 * Return: Void.
 */
void factorize(unsigned long num)
{
	unsigned long i;

	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			printf("%lu=%lu*%lu\n", num, num / i, i);
			break;
		}
	}
}
