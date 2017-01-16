/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzmuda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:48:19 by bzmuda            #+#    #+#             */
/*   Updated: 2016/11/03 17:02:53 by bzmuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		progressor;
	int		i;

	tab = NULL;
	i = 0;
	progressor = min;
	if (min >= max)
		return (NULL);
	if (!(tab = (int *)malloc(sizeof(int) * (max - min))))
		return (NULL);
	while (progressor < max)
	{
		tab[i] = progressor;
		i++;
		progressor++;
	}
	return (tab);
}
