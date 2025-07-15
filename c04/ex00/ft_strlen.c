/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 11:32:48 by luviso-p          #+#    #+#             */
/*   Updated: 2025/04/07 11:42:08 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	contador;

	contador = 0;
	while (*str != '\0')
	{
		str++;
		contador++;
	}
	return (contador);
}

/*int	main(void)
{
	int	length;

	length = ft_strlen("SOY EL MEJOR EN EL MARIO KART");
	printf("Numero de letras: %d", length);
}*/
