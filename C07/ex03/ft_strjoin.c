/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandre-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 13:27:46 by gandre-d          #+#    #+#             */
/*   Updated: 2023/08/15 14:31:47 by gandre-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcat(char *s1, char *s2, char *sep, int index)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s2[i])
	{
		s1[index] = s2[i];
		i++;
		index++;
	}
	while (sep[j])
	{
		s1[index] = sep[j];
		j++;
		index++;
	}
	return (index);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s1;
	int		i;
	int		len;
	int		index;
	int		j;

	i = 0;
	len = 0;
	while (i < size)
		len = len + ft_strlen(strs[i++]);
	s1 = (char *)malloc((len + 1 + ft_strlen(sep) * (size - 1)) * sizeof(char));
	if (s1 == NULL)
		return (NULL);
	i = 0;
	index = 0;
	while (i < size)
	{
		if (i < size - 1)
			index = ft_strcat(s1, strs[i++], sep, index);
		else
			index = ft_strcat(s1, strs[i++], "\0", index);
	}
	j = ft_strlen(s1);
	s1[j] = '\0';
	return (s1);
}

/*int	main(int argc, char *argv[]){
	char sep[] = "**";
	char *str = ft_strjoin(argc, argv, sep);
	printf("%s", str);
	free(str);
	return (0);
}*/
