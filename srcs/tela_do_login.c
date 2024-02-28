/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tela_do_login.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:56:37 by edalexan          #+#    #+#             */
/*   Updated: 2024/02/28 21:27:33 by edalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void	limpar_tela(void)
{
	system ("clear");
}

int	main(void)
{
	char	nome[20];

	/*tela do login*/
	limpar_tela();
        write (1, "-------------------\n", 20);
        write (1, "-----SERPENSIO-----\n", 20);
        write (1, "-------------------\n", 20);
        write (1, "\n", 1);
        write (1, "\n", 1);
        write (1, "Insira seu nome de jogador pra continuar: \n", 43);
        fgets (nome, sizeof(nome), stdin);
	limpar_tela();
        printf ("Bem Vindo ao Serpensio %s\n", nome);
	printf ("!! PRESSIONE QUALQUER TECLA PRA CONTINUAR \n");
	getchar();
        limpar_tela();
	return (0);
}
