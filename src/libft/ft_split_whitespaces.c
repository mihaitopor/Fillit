/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 19:02:17 by bluca             #+#    #+#             */
/*   Updated: 2018/01/03 19:02:19 by bluca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_count_words(char *str)
{
	int		i;

	i = 0;
	while (*str)
	{
		while (*str && (*str == '\t' || *str == ' ' || *str == '\n'))
			str++;
		if (*str && *str != '\t' && *str != ' ' && *str != '\n')
		{
			i++;
			while (*str && *str != '\t' && *str != ' ' && *str != '\n')
				str++;
		}
	}
	return (i);
}

char			**ft_split_whitespaces(char *str)
{
	char	**result;
	int		i;
	int		j;

	i = ft_count_words(str);
	if (!(result = (char **)malloc((i + 1) * sizeof(char *))))
		return (NULL);
	j = -1;
	while (*str)
	{
		while (*str && (*str == '\t' || *str == ' ' || *str == '\n'))
			str++;
		if (*str && *str != '\t' && *str != ' ' && *str != '\n')
			result[++j] = ft_strdup(str);
		while (*str && *str != '\t' && *str != ' ' && *str != '\n')
			str++;
	}
	result[i] = NULL;
	return (result);
}
