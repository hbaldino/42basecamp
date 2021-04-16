/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaldino <hbaldino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 03:27:38 by hbaldino          #+#    #+#             */
/*   Updated: 2021/04/16 14:03:24 by hbaldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] = str[0] - 32;
			i++;
		}
		if (((str[i] >= 97 && str[i] <= 122) &&
		(str[i - 1] >= 32 && str[i - 1] <= 47)) ||
		(str[i - 1] >= 91 && str[i - 1] <= 96) ||
		(str[i - 1] >= 123 && str[i - 1] <= 126) ||
		(str[i - 1] >= 58 && str[i - 1] <= 64))
		{
			str[i] = str[i] - 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}
