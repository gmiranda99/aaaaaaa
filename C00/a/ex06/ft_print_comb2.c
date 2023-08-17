/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandre-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:14:34 by gandre-d          #+#    #+#             */
/*   Updated: 2023/08/02 20:59:39 by gandre-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putchar((char)(i / 10) + 48);
			ft_putchar((char)(i % 10) + 48);
			ft_putchar(' ');
			ft_putchar((char)(j / 10) + 48);
			ft_putchar((char)(j % 10) + 48);
			j++;
			if (i != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		i++;
	}
}
/*int main(){
        ft_print_comb2();
}*/
