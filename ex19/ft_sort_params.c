/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzmuda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:26:53 by bzmuda            #+#    #+#             */
/*   Updated: 2016/11/06 11:10:39 by bzmuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print(char **tab, int nb)
{
	int i;

	i = 1;
	while (i < nb)
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	char	*swapper;
	int		end;
	int		i;

	end = 1;
	while (end)
	{
		end = 0;
		i = 0;
		while (++i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				swapper = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = swapper;
				end = 1;
			}
		}
	}
	ft_print(argv, argc);
	return (0);
}
