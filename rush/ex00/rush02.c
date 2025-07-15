/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 12:48:49 by luviso-p          #+#    #+#             */
/*   Updated: 2025/03/23 19:26:14 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern void	ft_putchar(char c);

void	print_characters(int i, int j, int x, int y)
{
	if ((i == 0 && (j == 0 || j == x - 1))
		|| (i == y - 1 && (j == 0 || j == x - 1)))
	{
		if (i == 0)
		{
			ft_putchar('A');
		}
		else
		{
			ft_putchar('C');
		}
	}
	else if (i == 0 || i == y - 1)
	{
		ft_putchar('B');
	}
	else if (j == 0 || j == x - 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

char	message_error(int x, int y)
{
	if ((x <= 0) || (y <= 0))
	{
		write(1, "Introduce números válidos, no hagas el tonto", 46);
		return ('1');
	}
	else
	{
		return ('0');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	if (message_error(x, y) == '1')
	{
		return ;
	}
	else
	{
		while (i < y)
		{
			j = 0;
			while (j < x)
			{
				print_characters(i, j, x, y);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}
