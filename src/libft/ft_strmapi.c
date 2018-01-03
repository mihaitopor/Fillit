/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtopor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 17:45:50 by mtopor            #+#    #+#             */
/*   Updated: 2017/12/19 17:45:55 by mtopor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*aux;

	if (f && s)
	{
		i = -1;
		if (!(aux = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1))))
			return (NULL);
		while (s[++i])
			aux[i] = f(i, s[i]);
		aux[i] = '\0';
		return (aux);
	}
	else
		return (NULL);
}
