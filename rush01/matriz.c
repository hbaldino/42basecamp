/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matriz.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaldino <hbaldino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 22:56:03 by hbaldino          #+#    #+#             */
/*   Updated: 2021/04/10 23:06:35 by hbaldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_vet(char vet[4][4])
{
	int row;
	int col;

	col = 0;
	while(col < 4)
	{
		row = 0;
		while(row < 4)
		{
			write(1, &vet[col][row], 1);
			row++;
		}
		col++;
		write(1, "\n", 1);
	}
}
