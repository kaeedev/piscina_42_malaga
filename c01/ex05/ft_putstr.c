/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:31:05 by luviso-p          #+#    #+#             */
/*   Updated: 2025/03/27 18:33:38 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	c;

	while (*str)
	{
		c = *str;
		write(1, &c, 1);
		str++;
	}
}

/*int	main(void)
{
	ft_putstr("ME GUSTA COMER CACA");
	return (0);
}*/
