/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandre-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:54:24 by gandre-d          #+#    #+#             */
/*   Updated: 2023/07/29 17:07:52 by gandre-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division;
	int	remainder;

	division = *a / *b;
	remainder = *a % *b;
	*a = division;
	*b = remainder;
}
/*int main(){
	int a = 6;
	int b = 3;
	printf("a: %d\nb: %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a: %d\nb: %d\n", a, b);
}*/
