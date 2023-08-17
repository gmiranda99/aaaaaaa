#include <stdio.h>

char	*delspaces(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	i--;
	while (str[i] == ' ')
	{
		i--;
	}
	str[i] = '\0';
	return (str);
}
int	count_words(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	str = delspaces(str);
	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%d", count_words(argv[1]));
	}
}
