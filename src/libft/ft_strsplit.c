/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtopor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 13:21:01 by mtopor            #+#    #+#             */
/*   Updated: 2017/12/03 14:23:21 by mtopor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	k;
	int		first;
	int		last;
	char	**split;

	split = NULL;
	i = 0;
	k = 0;
	if (s && (split = (char **)malloc(sizeof(*split) * (ft_strlen(s) / 2 + 2))))
	{
		while (s[i])
		{
			while (s[i] && s[i] == c)
				i++;
			first = i;
			while (s[i] && s[i] != c)
				i++;
			last = i;
			if (last > first)
				split[k++] = ft_strsub(s, first, (last - first));
		}
		split[k] = NULL;
	}
	return (split);
}
