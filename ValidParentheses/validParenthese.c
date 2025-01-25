#include <stdbool.h>
#include <stdio.h>

bool isValid(char* s) {
    char	*str = "(){}[]";
	char	stack[1000];
	int i;
	int j;

	i = 0;
	j = -1;
	
	while (s[i])
	{
		if (s[i] == '(' || s[i] == '{' || s[i] == '[')
			stack[++j] = s[i];
		else
		{
			if (j == -1)
				return (false);
			if ((s[i] == ')' && stack[j] != '(') ||
				(s[i] == '}' && stack[j] != '{') ||
				(s[i] == ']' && stack[j] != '['))
				return (false);
			j--;
		}
			
		i++;
	}
	return (j == -1);
}

int main()
{
	char *str = "[]";
	printf("%d", isValid(str));
	
}