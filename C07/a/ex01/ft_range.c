/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandre-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 18:12:58 by gandre-d          #+#    #+#             */
/*   Updated: 2023/08/07 19:44:03 by gandre-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	size;

	i = 0;
	size = max - min;
	if (size <= 0)
		return (NULL);
	arr = (int *)malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);
	while (i < size)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
/*
int	main()
{
	int	i;
	int	size;
	int	*arr;

	size = 7;
	i = 0;
	arr = ft_range(-5, 2);
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	free(arr);
}*/
