/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtopor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 16:58:14 by mtopor            #+#    #+#             */
/*   Updated: 2017/11/26 16:59:01 by mtopor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t					i;
	unsigned char			*cast_dest;
	unsigned char			cast_c;
	const unsigned char		*cast_src;

	i = 0;
	cast_dest = (unsigned char *)dest;
	cast_c = (unsigned char)c;
	cast_src = (const unsigned char *)src;
	while (i < n)
	{
		cast_dest[i] = cast_src[i];
		if (cast_dest[i] == cast_c)
			return ((dest + i + 1));
		i++;
	}
	return (NULL);
}
