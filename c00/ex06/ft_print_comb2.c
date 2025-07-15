/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 11:55:55 by luviso-p          #+#    #+#             */
/*   Updated: 2025/03/31 18:17:40 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		i;
	int		j;
	char	numeritos[5];

	i = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			numeritos[0] = i / 10 + '0';
			numeritos[1] = i % 10 + '0';
			numeritos[2] = ' ';
			numeritos[3] = j / 10 + '0';
			numeritos[4] = j % 10 + '0';
			write(1, &numeritos, 5);
			if (!(i == 98 && j == 99))
			{
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
