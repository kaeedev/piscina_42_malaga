/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 10:54:54 by luviso-p          #+#    #+#             */
/*   Updated: 2025/03/27 18:32:17 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*int	main(void)
{
	int*	p1;
	int*	p2;
	int	n1;
	int	n2;

	p1 = &n1;
	p2 = &n2;
	n1 = 10;
	n2 = 42;
	ft_swap(p1, p2);
	printf("Valores cambiados. Ahora a vale '%d' y b vale '%d'\n", *p1, *p2);
	return (0);
}*/
