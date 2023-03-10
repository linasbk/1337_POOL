/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsabik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 09:43:03 by lsabik            #+#    #+#             */
/*   Updated: 2022/07/30 12:50:32 by lsabik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while (*s1 == *s2)
	{
		n --;
		if (*s1 == '\0' || n == 0)
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
