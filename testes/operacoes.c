/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operacoes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaldino <hbaldino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 03:12:50 by hbaldino          #+#    #+#             */
/*   Updated: 2021/04/03 03:19:32 by hbaldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, soma, sub, mult;
	a = 25;
	b = 5;
	soma = a + b;
	sub = a - b;
	mult = a * b;
	printf("%d\n", soma);
	printf("%d\n", sub);
	printf("%d\n", mult);
}