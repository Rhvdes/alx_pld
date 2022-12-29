#include <stdio.h>

int sum(int a, int b)
{
	return a + b;
}

int main(void)
{
	int a = 3;
	int b = 4;
	int result = sum(a, b);
	printf("The sum of %d and %d is %d\n", a, b, result);
	return 0;
}
