/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsabik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:56:37 by lsabik            #+#    #+#             */
/*   Updated: 2022/07/26 09:22:43 by lsabik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_alph(char *str)
{
	if ((*str <= 'z' && *str >= 'a') || (*str <= 'Z' && *str >= 'A'))
		return (1);
	return (0);
}

int	ft_nbr(char *str)
{
	if (*str <= '9' && *str >= '0')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	*a;
	int		new;

	new = 1;
	a = str;
	while (*str)
	{
		if (ft_alph(str) || ft_nbr(str))
		{
			if (ft_alph(str) && new && (*str <= 'z' && *str >= 'a'))
				*str -= 32;
			else if (!(new) && (*str <= 'Z' && *str >= 'A'))
				*str += 32;
			new = 0;
		}
		else if (!(ft_alph(str) || ft_nbr(str)))
			new = 1;
		str ++;
	}
	return (a);
}
