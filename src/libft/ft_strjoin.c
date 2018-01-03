/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtopor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 22:28:36 by mtopor            #+#    #+#             */
/*   Updated: 2017/12/02 22:35:42 by mtopor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *join;

	join = NULL;
	if (s1 && s2)
	{
		if (!(join = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
			return (NULL);
		ft_memcpy(join, s1, ft_strlen(s1));
		ft_strcat(join, s2);
	}
	else if (s1)
		return (ft_strdup(s1));
	else if (s2)
		return (ft_strdup(s2));
	return (join);
}
