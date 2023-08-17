/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandre-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 13:35:00 by gandre-d          #+#    #+#             */
/*   Updated: 2023/07/31 19:30:40 by gandre-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	end;
	int	temp;

	i = 0;
	end = size - 1;
	while (i < end)
	{
		temp = tab[i];
		tab[i] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}
/*int main() {
    int tab[] =
    {1, 2, 3, 4, 5};
    int size = 5;
    printf("%d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
    ft_rev_int_tab(tab, size);
    printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
}*/
