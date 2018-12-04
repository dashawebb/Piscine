/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creek <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 18:28:38 by creek             #+#    #+#             */
/*   Updated: 2018/11/25 19:38:05 by creek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 4096

int		ft_display_file(int argc, char **argv)
{
	char	buf[BUF_SIZE + 1];
	int		fd;
	int		ret;
	int		i;

	i = 0;
	ret = 1;
	if (argc == 1)
		write(1, "File name missing.\n", 19);
	else if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	else
	{
		fd = open(argv[1], O_RDONLY);
		while (ret)
		{
			ret = read(fd, buf, BUF_SIZE);
			buf[BUF_SIZE - 1] = '\0';
			write(1, buf, ret);
		}
	}
	return (0);
}

int		main(int argc, char **argv)
{
	ft_display_file(argc, argv);
	return (0);
}
