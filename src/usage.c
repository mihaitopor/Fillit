/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usage.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 18:46:39 by bluca             #+#    #+#             */
/*   Updated: 2018/01/03 18:46:43 by bluca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

void	ft_usage(void)
{
	ft_putendl("usage: ./fillit [File containing between 2 and 12 Tetriminos]");
	ft_putendl("        Note : If file contains more than 12 Tetriminos,");
	ft_putendl("               The program will run slowly.");
}
