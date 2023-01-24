/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsabik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:40:59 by lsabik            #+#    #+#             */
/*   Updated: 2022/07/24 23:53:30 by lsabik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_write_comb(int a, int b, int bl)
{
	ft_putchar('0' + a / 10);
	ft_putchar('0' + a % 10);
	ft_putchar(' ');
	ft_putchar('0' + b / 10);
	ft_putchar('0' + b % 10);
	if (bl)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	bl;

	a = 0;
	bl = 1;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			bl = !((a == 98) && (b == 99));
			ft_write_comb(a, b, bl);
			b++;
		}
		a++;
	}
}
