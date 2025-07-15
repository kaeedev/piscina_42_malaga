/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 11:17:07 by luviso-p          #+#    #+#             */
/*   Updated: 2025/04/01 11:55:43 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!((*str >= '0') && (*str <= '9')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int	main(void)
{
	char str1[] = "123456";
	char str2[] = "12 34 56";
	char str3[] = "";
	char str4[] = "SOY TOPO";
	
	printf("Resultado del string 1: %d\n", ft_str_is_numeric(str1));
	printf("Resultado del string 2: %d\n", ft_str_is_numeric(str2));
	printf("Resultado del string 3: %d\n", ft_str_is_numeric(str3));
	printf("Resultado del string 4: %d\n", ft_str_is_numeric(str4));
	return (0);
}*/
