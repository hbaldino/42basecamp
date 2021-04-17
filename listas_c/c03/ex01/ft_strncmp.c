/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaldino <hbaldino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 22:07:44 by hbaldino          #+#    #+#             */
/*   Updated: 2021/04/17 02:40:40 by hbaldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && *s1 != '\n' && *s2 != '\n' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2 && i < n)
		return (0);
	else
		return *(unsigned char *)s1 - *(unsigned char *)s2;
}
