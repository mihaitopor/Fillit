/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtopor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 17:47:23 by mtopor            #+#    #+#             */
/*   Updated: 2017/12/19 17:47:26 by mtopor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(const char *s, char (*f)(char))
{
	size_t	i;
	char	*aux;

	if (f && s)
	{
		i = -1;
		if (!(aux = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1))))
			return (NULL);
		while (s[++i])
			aux[i] = f(s[i]);
		aux[i] = '\0';
		return (aux);
	}
	else
		return (NULL);
}
