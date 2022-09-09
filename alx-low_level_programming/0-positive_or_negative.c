#include <stdlib.h>
#include <time.h>
/**
 * main - positive or negative number - print sign og negative number
 * void - empty parameter list for main
 *
 * Description: this if/else statements declare the sign (positive
 * or negative) of a random number. it also tells if the value if zero.
 *
 * Return: 0 for success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	  {
	    printf("%d is positive\n", n);
	  }
	else if (n == 0)
	  {
	    printf("%d is zero\n", n);
	  }
	else
	  {
	    printf("%d is negative\n", n);
	  }
	return (0);
}
