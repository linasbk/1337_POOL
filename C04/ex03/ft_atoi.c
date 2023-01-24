/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsabik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 10:11:24 by lsabik            #+#    #+#             */
/*   Updated: 2022/07/31 16:29:45 by lsabik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_num(char c)
{
	return (c <= '9' && c >= '0');
}

int	ft_space(char c)
{
	return (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v');
}

int	ft_atoi(char *str)
{
	int	i;
	int	minus;
	int	num;

	i = 0;
	minus = 1;
	num = 0;
	while (ft_space(str[i]))
		i++;
	while (!ft_num(str[i]))
	{
		if (str[i] == '-')
			minus *= -1;
		else if (str[i] != '+')
			return (0);
		i++;
	}
	while (ft_num(str[i]))
	{
		num = (str[i] - '0') + (num * 10);
		i++;
	}
	return (minus * num);
}
