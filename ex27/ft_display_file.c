/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzmuda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 17:03:41 by bzmuda            #+#    #+#             */
/*   Updated: 2016/11/06 11:52:46 by bzmuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 4096

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_display_file(char *file_path)
{
	int		op;
	int		lec;
	char	buf[BUF_SIZE];

	lec = 0;
	op = open(file_path, O_RDONLY);
	if (op == -1)
	{
		close(op);
		return (1);
	}
	while ((lec = read(op, buf, BUF_SIZE)))
	{
		ft_putstr(buf);
		buf[lec] = '\0';
	}
	close(op);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc <= 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		ft_display_file(argv[1]);
	return (0);
}
