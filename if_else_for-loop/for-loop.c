#include <stdio.h>
/* creating a 2 times multiplication
 * table with for loop
 */
int main(void)
{
	int times;
	int number = 2;

	for (times = 1; times < 13; times++)
	{
		printf("%d x %d = %d\n", number, times, number*times);
	}
	return (0);
}
