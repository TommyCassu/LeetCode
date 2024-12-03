#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPalindrome(int x)
{
	int			original;
	long		reverse;

	original = x;
	reverse = 0;
	while (x)
	{
		reverse = (reverse * 10) + (x % 10);
		x /= 10;
	}
	return (reverse == original);
}