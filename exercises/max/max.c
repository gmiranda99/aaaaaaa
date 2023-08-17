#include <stdio.h>

int	max(int* tab, unsigned int len)
{
	unsigned int	i;
	int	max;

	i = 0;
	max = tab[i];
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

int	main()
{
	int a[] = {1, 7, 9, 28, 2, 32};
	printf("%d", max(a, 6));
}
