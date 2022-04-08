#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main: this is the main positive/negative function
*Return: returns if n is positive, negative or 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		return("%d is positive\n",n);
	}
	else if (n == 0)
	{
		return("%d is zero\n",n);
	}
	else if (n < 0)
	{
		return("%d is negative\n", n);
	}
	return (0);
}
