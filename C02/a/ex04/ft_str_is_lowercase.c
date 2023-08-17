/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandre-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:57:44 by gandre-d          #+#    #+#             */
/*   Updated: 2023/08/04 14:11:46 by gandre-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
	char *c = "aaaaa";
	char *d = "aaa1";
	printf("%d", ft_str_is_lowercase(c));
	printf("%d", ft_str_is_lowercase(d));
}*/
