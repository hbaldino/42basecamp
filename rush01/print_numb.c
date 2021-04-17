/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaldino <hbaldino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 15:10:48 by hbaldino          #+#    #+#             */
/*   Updated: 2021/04/11 15:29:16 by hbaldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_error(int argc, char *argv[])
{
	char number;
	int count;
	
	count = 0;
	if(argc != 2)
	{
		write(1, "error1", 6);
	}	
	while(*argv != '\0')
	{
		if(count % 2 == 1 && argv[count] != 32)
		{
			write(1, "error2", 6);
		}
		if(count % 2 == 0 && argv[count] < 49 && argv[count] > 52)
		{
			write(1, "error3", 6);
		}
		count++;
		argv++;
	}
	if(count != 31)
	{
		write(1, "error4", 6);
	}
}
