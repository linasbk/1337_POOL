/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsabik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 16:33:56 by lsabik            #+#    #+#             */
/*   Updated: 2022/08/10 00:50:47 by lsabik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	char	*tab;

	tab = malloc(sizeof(char) * (ft_strlen(src) + 1));
	copy = tab;
	while (*src)
	{
		*tab = *src;
		tab++;
		src++;
	}
	*tab = '\0';
	if (!(tab))
		return (NULL);
	return (copy);
}
