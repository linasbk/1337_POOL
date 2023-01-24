/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsabik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:47:38 by lsabik            #+#    #+#             */
/*   Updated: 2022/07/27 18:19:29 by lsabik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int	ft_strcmp(char *s1, char *s2)
// {
// 	int	i;

// 	i = 0;
// 	while (s1[i] && s2[i])
// 	{
// 		if (s1[i] == s2[i])
// 			i++;
// 		else
// 			break ;
// 	}
// 	return (s1[i] - s2[i]);
// }
#include<stdlib.h>
#include<stdio.h>
int	get_word_num(char *str)
{
	int i = 0;
	int count = 0;
	int flag = 1;

	while(str[i])
	{
		if(str[i] == ' ' || str[i] == '\t')
			flag = 1;
		if(str[i] != ' ' && str[i] != '\t' && flag == 1)
		{
			flag = 0;
			count++;
		}
		i++;
	}
	return(count);
}
char *get_word(char *str, int *old_len)
{
	char *res;
	int i;
	i = *old_len;
	while(str[i] == ' ' || str[i] == '\t')
		i++;
	int start = i;
	while(str[i] && str[i] != ' ' && str[i] != '\t')
		i++;
	res = malloc(sizeof(char*) * (i - start) + 1);
	if(!res)
		return (NULL);
	i = start;
	int j = 0;
	while(str[i] && str[i] != ' ' && str[i] != '\t')
	{
		res[j] = str[i];
		j++;
		i++;
	}
	res[j] = '\0';
	*old_len = i;
	return(res);
}
char    **ft_split(char *str)
{
	char **res;
	int i = 0;
	int len = 0;
	if (!str)
		return (NULL);
	int full_len = get_word_num(str);
	res = malloc(sizeof(char *) * full_len + 1);
	if (!res)
		return (NULL);
	while(i < full_len)
	{
		res[i] = get_word(str, &len);
		i++;
	}
	res[i] = NULL;
	return(res);
}
int main()
{
  int i = 0;
    // char *str = " salam  lina ";
    char **ptr = ft_split(" salam  lina ");
    while(ptr && ptr[i])
    {
      printf("%s \n", ptr[i]);
      i++;
    }
}