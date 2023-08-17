#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
	unsigned int	i;

	i = 1;
	while (i <= n && i)
	{
		if (i == n)
			return (1);
		i = i*2;
	}
	return (0);
}

int main(){
	printf("%d", is_power_of_2(4294967295));
	printf("%d", is_power_of_2(512));
}
