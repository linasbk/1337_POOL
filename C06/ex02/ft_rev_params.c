/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsabik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 21:48:06 by lsabik            #+#    #+#             */
/*   Updated: 2022/08/01 20:19:50 by lsabik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

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

int	main(int ac, char **av)
{
	int	i;

	i = ac - 1;
	if (ac > 1)
	{
		while (i > 0)
		{
			write(1, av[i], ft_strlen(av[i]));
			write(1, "\n", 1);
			i--;
		}
	}
}
