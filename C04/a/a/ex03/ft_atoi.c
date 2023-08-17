/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandre-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 19:30:28 by gandre-d          #+#    #+#             */
/*   Updated: 2023/08/07 14:10:16 by gandre-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	result;
	int	contador;

	contador = 1;
	result = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			contador *= -1;
		str++;
	}
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (result);
		if (contador == 1)
			result = result * 10 + (*str - 48);
		else
			result = result * 10 - (*str - 48);
		str++;
	}
	return (result);
}
/*int	main(int argc, char* argv[])
{
	if (argc == 2)
	{
		printf("%d", ft_atoi(argv[1]));
	}
}*/
