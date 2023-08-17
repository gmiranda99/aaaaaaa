/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandre-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:14:29 by gandre-d          #+#    #+#             */
/*   Updated: 2023/08/04 14:29:09 by gandre-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_length;

	i = 0;
	src_length = 0;
	while (src[src_length] != '\0')
	{
		src_length++;
	}
	if (src_length != 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_length);
}
/*int main(){
    char src[] = "World!";
    char dest[] = "Hello ";
    printf("%d | %s", ft_strlcpy(dest, src, 10), dest);
}*/
