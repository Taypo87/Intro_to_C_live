#include <stdio.h>

void main(void)
{
	int min = 1;
	int hour = 0;

	while (hour <= 12)
	{
		printf("Hour: %i\n", hour);
		hour++;
		min = 1;

		while (min <= 59)
		{
			printf("%i\n", min);
			min++;
		}
	}

}
