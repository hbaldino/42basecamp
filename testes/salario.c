/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   salario.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaldino <hbaldino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 03:12:50 by hbaldino          #+#    #+#             */
/*   Updated: 2021/04/03 03:37:19 by hbaldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b;
	a = 2994.5;
	b = a * 0.3;
	printf("%f\n", b);
}