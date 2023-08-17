/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandre-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 20:03:40 by gandre-d          #+#    #+#             */
/*   Updated: 2023/07/31 20:41:27 by gandre-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}
/*int	main(){
	char a[] = "lOWer CAse";
	char b[] = "aaaaa";
	printf("%s\n", ft_strupcase(a));
	printf("%s", ft_strupcase(b));
}*/
