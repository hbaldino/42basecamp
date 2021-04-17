/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaldino <hbaldino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 00:07:30 by hbaldino          #+#    #+#             */
/*   Updated: 2021/04/11 00:13:15 by hbaldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main()
{
	int **p;
	int i, j, N = 2;
	p = (int **) malloc(N * sizeof(int *));
	for (i = 0; i < N; i++)
	{
		p[i] = (int *) malloc(N * sizeof(int));
		for (j = 0; j < N; j++)
			scanf("%d",&p[i][j]);
	}
	system("pause");
	return (0);
}