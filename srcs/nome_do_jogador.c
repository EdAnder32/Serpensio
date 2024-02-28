/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nome_do_jogador.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:06:19 by edalexan          #+#    #+#             */
/*   Updated: 2024/02/14 10:51:30 by edalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	indice;

	indice = 0;
	while (str[indice] != '\0')
	{
		write (1, &str[indice], 1);
		indice++;
	}
}

void	nome(char *str)
{
	write (1, "NOME: ", 6);
	ft_putstr(str);
	write (1, "\n", 1);
}
