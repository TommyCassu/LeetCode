#include <stdio.h>
#include <stdlib.h>

int* twoSum(int *nums, int numsSize, int target, int *returnSize) 
{
    int	i;
	int j;
	int *result;

	i = 0;
	result = malloc(sizeof(int) * 2);
	if (!result)
	{
		*returnSize = 0;
		return (NULL);
	}
	while(i < numsSize - 1)
	{
		j = i + 1;
		while (j < numsSize)
		{
			if ((nums[i] + nums[j]) == target)
			{
				result[0] = i;
				result[1] = j;
				*returnSize = 2;
				return (result);
			}
			j++;
		}
		i++;
	}
	free(result);
	*returnSize = 0;
	return (NULL);
}