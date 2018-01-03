/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtopor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 19:15:29 by mtopor            #+#    #+#             */
/*   Updated: 2017/11/27 19:15:51 by mtopor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	temp;

	i = 0;
	if (s2[i] == '\0')
		return ((char *)s1);
	while (s1[i] && i < n)
	{
		j = 0;
		temp = i;
		while (s1[i] == s2[j] && i < n)
		{
			i++;
			j++;
			if (!s2[j])
				return ((char *)&s1[temp]);
		}
		i = temp;
		i++;
	}
	return (0);
}
