/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandre-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:28:50 by gandre-d          #+#    #+#             */
/*   Updated: 2023/07/29 16:56:00 by gandre-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main()
{
	int a = 6;
	int b = 3;
	int resto;
	int modulo;
	ft_div_mod(a, b, &resto, &modulo);
	printf("*div = %d\n*mod = %d\n", resto, modulo);
}*/
