#include <stdio.h>
#include <stdio.h>
#include <time.h>
/**
 *main-progrtam entry point
 *Return:0 success, non zero fail
 */

int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	a = n % 10;

	if (a > 5)
	{	printf("Last digit of %d is %d and is greater than 5\n", n, a);

	}

	else if (a == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, a);
	}
	else if (a < 6)
	{
		printf("Last digit of %d id %d and is less than 6 and not 0\n", n, a);
	}


	return (0);
}