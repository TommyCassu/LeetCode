#include <stdio.h>

int	romanToInt(char  *s)
{
	int	roman[1001];
	int result;
	int i;

	roman['I'] = 1;
	roman['V'] = 5;
	roman['X'] = 10;
	roman['L'] = 50;
	roman['C'] = 100;
	roman['D'] = 500;
	roman['M'] = 1000;
	result = 0;
	i = 0;

	while (s[i])
	{
		if (i > 0 && roman[s[i]] > roman[s[i-1]])
		{
			result += (roman[s[i]] - (2 * roman[s[i-1]]));
		}
		else
			result += roman[s[i]];
		i++;	
	}
	return(result);
}

int main()
{
	printf("%d\n", romanToInt("III"));
	printf("%d\n", romanToInt("IV"));
	printf("%d\n", romanToInt("VI"));
}