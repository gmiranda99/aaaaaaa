#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	pica;

	i = 0;
	j = 0;
	pica = 0;
	if (argc == 3)
	{
		while (argv[2][i])
		{
			if (argv[1][j] == argv[2][i])
			{
				if (argv[1][j + 1] == '\0')
				{
					pica = 1;
				}
				j++;
			}
			i++;
		}
	}
	j = 0;
	if (pica == 1)
	{
		while (argv[1][j])
		{
			write(1, &argv[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
}
