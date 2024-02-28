/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tela_do_login.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:56:37 by edalexan          #+#    #+#             */
/*   Updated: 2024/02/28 18:03:06 by edalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	limpar_tela(void)
{
	system ("clear");
}

void	login(void)
{
	limpar_tela();
	write (1, "-------------------\n", 20);
	write (1, "-----SERPENSIO-----\n", 20);
	write (1, "-------------------\n", 20);
	write (1, "\n", 1);
	write (1, "\n", 1);
	nome_do_jogador();
}
