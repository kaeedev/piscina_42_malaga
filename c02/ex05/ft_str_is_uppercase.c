/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 12:53:39 by luviso-p          #+#    #+#             */
/*   Updated: 2025/04/01 13:20:55 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!((*str >= 'A') && (*str <= 'Z')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int   main(void)
{
        char str1[] = "HOLAAAXD";
        char str2[] = "12341";
        char str3[] = "oRanGutan";
        char str4[] = "";

        printf("Resultado del string 1: %d\n", ft_str_is_uppercase(str1));
        printf("Resultado del string 2: %d\n", ft_str_is_uppercase(str2));
        printf("Resultado del string 3: %d\n", ft_str_is_uppercase(str3));
        printf("Resultado del string 4: %d\n", ft_str_is_uppercase(str4));
	return (0);
}*/
