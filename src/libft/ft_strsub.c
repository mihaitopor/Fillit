/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtopor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 22:14:30 by mtopor            #+#    #+#             */
/*   Updated: 2017/12/02 22:39:57 by mtopor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s || (start == 0 && len == 0))
		return (NULL);
	if (!(sub = ft_strnew(len)))
		return (NULL);
	sub = ft_strncpy(sub, &s[start], len);
	sub[len] = '\0';
	return (sub);
}
