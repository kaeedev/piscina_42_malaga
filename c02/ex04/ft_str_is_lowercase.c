/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 12:31:19 by luviso-p          #+#    #+#             */
/*   Updated: 2025/04/01 13:12:52 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!((*str >= 'a') && (*str <= 'z')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int   main(void)
{
	char str1[] = "Oreo";
	char str2[] = "12341";
	char str3[] = "noooooo";
	char str4[] = "";

	printf("Resultado del string 1: %d\n", ft_str_is_lowercase(str1));
	printf("Resultado del string 2: %d\n", ft_str_is_lowercase(str2));
	printf("Resultado del string 3: %d\n", ft_str_is_lowercase(str3));
	printf("Resultado del string 4: %d\n", ft_str_is_lowercase(str4));
	return (0);
}*/
