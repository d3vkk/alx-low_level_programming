#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - generate random valid passwords
*
* Return: 0 if without error
*
*/
int main(void)
{
	int random = 0;
	int num = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (num < 2772)
	{
		random = rand() % 128;
		if ((num + random) > 2772)
		{
			break;
		}
		num = num + random;
		printf("%c", random);
	}
	printf("%c\n", (2772 - num));
	return (0);
}
