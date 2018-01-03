/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtopor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 21:31:46 by mtopor            #+#    #+#             */
/*   Updated: 2017/12/02 21:32:22 by mtopor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_striter(char *s, void (*f)(char *))
{
	unsigned int	i;

	i = -1;
	while (s && f && s[++i])
		f(&s[i]);
}
