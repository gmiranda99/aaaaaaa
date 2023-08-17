#include <unistd.h>

void	rush(int x, int y)
{
	int	number_of_lines;

	number_of_lines = 1;
	while (number_of_lines <= y)
	{
		if (number_of_lines == 1 || number_of_lines == y)
		{
			funcao(x, 'o', '-');
		}
		else
		{
			funcao(x, '|', ' ');
		}
		number_of_lines++;
	}
}

void	funcao(int x, char primeiro, char segundo)
{
	int	comprimento;

	comprimento = 1;
	while (comprimento <= x)
	{
		if (comprimento == 1 || comprimento == x)
		{
			ft_putchar(primeiro);
		}
		else
		{
			ft_putchar(segundo);
		}
		comprimento++;
	}
	ft_putchar('\n');
}
