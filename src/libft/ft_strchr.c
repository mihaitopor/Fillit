/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtopor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 19:49:29 by mtopor            #+#    #+#             */
/*   Updated: 2017/12/02 21:24:10 by mtopor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	cast_c;

	i = -1;
	cast_c = (const char)c;
	while (s[++i] != cast_c && s[i] != '\0')
		;
	if (s[i] == cast_c)
		return ((char *)&s[i]);
	return (NULL);
}
