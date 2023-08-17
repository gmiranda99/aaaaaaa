/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandre-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:27:23 by gandre-d          #+#    #+#             */
/*   Updated: 2023/08/08 18:13:48 by gandre-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	result;

	result = 0;
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	result = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (result);
}

/*int main(){
	printf("%d", ft_fibonacci(7));
}*/
