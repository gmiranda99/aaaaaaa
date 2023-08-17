/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandre-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:20:43 by gandre-d          #+#    #+#             */
/*   Updated: 2023/08/07 14:31:47 by gandre-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	controlo;

	i = 0;
	result = 0;
	controlo = 1;
	if (str[0] == '-')
	{
		controlo *= -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (result);
		if (controlo == -1)
		{
			result = result * 10 - (str[i] - 48);
		}
		else
		{
			result = result * 10 + (str[i] - 48);
		}
		i++;
	}
	return (result);
}*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
		ft_putnbr(nb);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}

/*int	main(int argc, char* argv[])
{
	if (argc == 2)
	{
		ft_putnbr(ft_atoi(argv[1]));
	}
}*/
