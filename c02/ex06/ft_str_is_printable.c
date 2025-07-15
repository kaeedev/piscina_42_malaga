 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 13:42:12 by luviso-p          #+#    #+#             */
/*   Updated: 2025/04/01 15:32:12 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!((*str >= 32) && (*str <= 126)))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int   main(void)
{
	char str1[] = "HOlAAA XD";
	char str2[] = "Høłæ";
	char str3[] = "ç";
	char str4[] = "";

	printf("Resultado del string 1: %d\n", ft_str_is_printable(str1));
	printf("Resultado del string 2: %d\n", ft_str_is_printable(str2));
	printf("Resultado del string 3: %d\n", ft_str_is_printable(str3));
	printf("Resultado del string 4: %d\n", ft_str_is_printable(str4));
	return (0);
}
