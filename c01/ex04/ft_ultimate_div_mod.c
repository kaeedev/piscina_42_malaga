/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 12:16:04 by luviso-p          #+#    #+#             */
/*   Updated: 2025/03/27 18:33:05 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*int	main(void)
{
	int n1;
	int n2;

	n1 = 10;
	n2 = 2;
	ft_ultimate_div_mod(&n1, &n2);
	printf("El valor de a es: '%d' y el valor de b es: '%d'", n1, n2);
	return (0);
}*/
