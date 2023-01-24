/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsabik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:47:36 by lsabik            #+#    #+#             */
/*   Updated: 2022/08/09 12:28:34 by lsabik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	*result;
	int	i;

	i = 0;
	arr = malloc(sizeof(int) * (max - min));
	if (!(arr))
		return (NULL);
	if (min >= max)
		return (0);
	while (i < (max - min))
	{
		*(arr + i) = min + i;
		i++;
	}
	result = arr;
	return (result);
}
