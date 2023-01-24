/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsabik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 19:28:02 by lsabik            #+#    #+#             */
/*   Updated: 2022/08/10 01:27:05 by lsabik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*t;
	int	i;

	if (min >= max)
		return (NULL);
	t = (int *)malloc((max - min) * sizeof(t));
	i = 0;
	if (t == NULL)
		return (NULL);
	while (min + i < max)
	{
		t[i] = min + i;
		i++;
	}
	return (t);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
	{
		if (min >= max)
		{
			range = NULL;
			return (0);
		}
		return (-1);
	}
	return (max - min);
}
