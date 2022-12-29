#include <stdio.h>
/**
 * a function to add 2 integers
 * @add2num- use to add the 2 integer
 */

void add2num(int a, int b)
{
	printf("The sum of %d + %d = %d\n", a, b, a + b);
}

int main(void)
{
	add2num(20, 10);
	add2num(454, 776);
	add2num(54, 44);
	add2num(66, 34);

	return (0);
}
