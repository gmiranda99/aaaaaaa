/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandre-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 22:51:09 by gandre-d          #+#    #+#             */
/*   Updated: 2023/08/04 16:26:14 by gandre-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		else
			i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (!((str[i - 1] >= 'a' && str[i - 1] <= 'z' )
					|| (str[i - 1] >= '0' && str[i - 1] <= '9')
					|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')))
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*int     main(void)
{
        char str[] = "salut, comment tu vas ? 42mots quarante-deux";
        printf("%s", ft_strcapitalize(str));
	return (0);
}*/
