/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 19:42:05 by luviso-p          #+#    #+#             */
/*   Updated: 2025/04/01 11:57:44 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!((*str >= 'A' && *str <= 'Z')
				|| (*str >= 'a' && *str <= 'z')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int	main(void)
{
	char str1[] = "Holaa xd";
	char str2[] = "12341";
	char str3[] = "NOoOOOOOOOOOOO";
	char str4[] = "";
	
	printf("Resultado del string 1: %d\n", ft_str_is_alpha(str1));
	printf("Resultado del string 2: %d\n", ft_str_is_alpha(str2));
	printf("Resultado del string 3: %d\n", ft_str_is_alpha(str3));
	printf("Resultado del string 4: %d\n", ft_str_is_alpha(str4));
	return (0);
}*/
