/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtopor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 16:33:27 by mtopor            #+#    #+#             */
/*   Updated: 2017/12/03 16:33:37 by mtopor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*cast_s1;
	unsigned char	*cast_s2;

	i = 0;
	cast_s1 = (unsigned char *)s1;
	cast_s2 = (unsigned char *)s2;
	while (cast_s1[i] == cast_s2[i] && cast_s1[i] != '\0')
		i++;
	if (cast_s1[i] == '\0' && cast_s2[i] == '\0')
		return (0);
	return (cast_s1[i] - cast_s2[i]);
}
