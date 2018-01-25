#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *arr;
	int size;
	int i;

	i = -1;
	printf("size of int: ");
	scanf_s("%d", &size);

	if (!(arr = (int *)malloc(sizeof(int) * size)))
		return(0);
	while (++i < size)
	{
		printf("int #%i : ", i + 1);
		scanf_s("%d", &arr[i]);
	}

	i = -1;
	while (++i < size)
		printf("arr[%i] = %i\n", i, arr[i]);
	scanf_s("%d", &size);
	free(arr);
	return(0);
}