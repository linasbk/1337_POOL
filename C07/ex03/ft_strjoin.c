/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsabik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:30:56 by lsabik            #+#    #+#             */
/*   Updated: 2022/08/09 23:56:18 by lsabik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

int	full_size(char **strs, char *sep, int size)
{
	int	i;
	int	lenght;

	i = 0;
	lenght = 0;
	while (i < size)
	{
		lenght += ft_strlen(strs[i]);
		i++;
	}
	lenght += ft_strlen(sep) * (size - 1);
	lenght += 1;
	return (lenght);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*res;
	int		len;

	if (size <= 0)
	{
		res = malloc(sizeof(char));
		*res = '\0';
		return (res);
	}
	i = 0;
	len = full_size(strs, sep, size);
	res = (char *)malloc(len * sizeof(char));
	res[0] = '\0';
	while (i < size)
	{
		res = ft_strcat(res, strs[i]);
		if (i != size - 1)
			res = ft_strcat(res, sep);
		i++;
	}
	return (res);
}
