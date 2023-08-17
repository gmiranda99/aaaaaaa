#include <unistd.h>
int	check_double(char *str, int pos, char c)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[1][i] != '\0' || argv[2][j] != '\0')
		{
			if (argv[1][i] == argv[2][j])
			{
				if (check_double(argv[1], i, argv[1][i]) == 1)
				{
					write(1, &argv[1][i], 1);
				j++;
				i++;
				}
			else
				j++;
			}
		}
	}
	write(1, "\n", 1);
}
