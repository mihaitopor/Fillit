/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtopor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 21:06:29 by mtopor            #+#    #+#             */
/*   Updated: 2017/12/02 21:06:38 by mtopor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strrchr(const char *s, int c)
{
	size_t			i;
	char			*save;
	unsigned char	cast_c;

	i = -1;
	save = NULL;
	cast_c = (const char)c;
	while (s[++i] != '\0')
		if (s[i] == cast_c)
			save = (char *)&s[i];
	if (s[i] == cast_c)
		save = (char *)&s[i];
	return (save);
}
