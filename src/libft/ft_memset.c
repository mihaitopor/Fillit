/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtopor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 16:07:16 by mtopor            #+#    #+#             */
/*   Updated: 2017/11/26 16:32:19 by mtopor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*s1;

	i = -1;
	s1 = (unsigned char *)s;
	if (n == 0)
		return (s);
	while (++i < n)
		s1[i] = (unsigned char)c;
	return (s);
}
