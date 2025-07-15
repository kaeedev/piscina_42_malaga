/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 20:15:00 by luviso-p          #+#    #+#             */
/*   Updated: 2025/04/03 19:40:34 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && s1[i] && s2[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	if ((i == n) || (s1[i] == s2[i]))
	{
		return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int   main(void)
{
	char    str1[] = "Ha salido el silksong";
	char    str2[] = "Ha salido el silksong";

	printf("Comparando las dos cadenas: %d\n", ft_strncmp(str1, str2, 20));
	return (0);
}*/
