/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 19:02:40 by bluca             #+#    #+#             */
/*   Updated: 2018/01/03 19:02:44 by bluca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

static void		disp_files(int argc, char **argv)
{
	char	buffer;
	int		fd;
	int		i;

	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd >= 0)
		{
			while (read(fd, &buffer, 1) != 0)
				write(1, &buffer, 1);
		}
		else
		{
			ft_putstr("ft_cat: ");
			ft_putstr(argv[i]);
			ft_putendl(": No such file or directory");
		}
		close(fd);
		i++;
	}
}

static void		disp_stdin(void)
{
	char	buffer;

	while (read(0, &buffer, 1) != 0)
		write(1, &buffer, 1);
}

int				ft_cat(int argc, char **argv)
{
	if (argc < 2 || argv[1][0] == '-')
		disp_stdin();
	disp_files(argc, argv);
	return (0);
}
