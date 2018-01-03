/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtopor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 18:53:30 by mtopor            #+#    #+#             */
/*   Updated: 2017/11/27 19:07:10 by mtopor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	c1;
	unsigned char	*s1;

	i = -1;
	c1 = (unsigned char)c;
	s1 = (unsigned char *)s;
	while (++i < n)
		if (s1[i] == c1)
			return ((void *)s1 + i);
	return (0);
}
