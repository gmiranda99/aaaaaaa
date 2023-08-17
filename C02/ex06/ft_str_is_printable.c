/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandre-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 19:48:21 by gandre-d          #+#    #+#             */
/*   Updated: 2023/07/31 20:01:18 by gandre-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
		{
			i++;
		}
		else 
		{
			return (0);
		}
	}
	return (1);
}
/*int main(){
	char a[] = "ASdsdadswda:'/";
	char b[] = "\n";
	printf("%d", ft_str_is_printable(a));
	printf("%d", ft_str_is_printable(b));
}*/
