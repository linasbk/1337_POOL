/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsabik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:23:49 by lsabik            #+#    #+#             */
/*   Updated: 2022/07/24 12:35:14 by lsabik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2147483648", 10);
		return ;
	}
	if (nb < 0)
	{
		nb *= -1 ;
		write(1, "-", 1);
	}
	if (nb / 10 != 0)
		ft_putnbr(nb / 10);
	c = '0' + (nb % 10);
	write(1, &c, 1);
}
