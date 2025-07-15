/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 13:29:53 by luviso-p          #+#    #+#             */
/*   Updated: 2025/03/31 18:24:25 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	escribirxd(char centenas, char decenas, char unidades)
{
	write(1, &centenas, 1);
	write(1, &decenas, 1);
	write(1, &unidades, 1);
	if (centenas < '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	centenas;
	char	decenas;
	char	unidades;

	centenas = '0';
	while (centenas <= '7')
	{
		decenas = centenas + 1;
		while (decenas <= '8')
		{
			unidades = decenas + 1;
			while (unidades <= '9')
			{
				escribirxd(centenas, decenas, unidades);
				unidades++;
			}
			decenas++;
		}
		centenas++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
