/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 19:08:12 by luviso-p          #+#    #+#             */
/*   Updated: 2025/04/07 14:14:40 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str)
	{
		i = 0;
		while ((str[i] == to_find[i]) && (to_find[i] != '\0'))
		{
			i++;
		}
		if (to_find[i] == '\0')
		{
			return (str);
		}
		str++;
	}
	return ("NULL");
}

/*int	main(void)
{
	char	str[] = "abababc";
	char	find[] = "ababc";
	printf("%s\n", ft_strstr(str, find));
	return (0);
}*/
