/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzmuda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:29:21 by bzmuda            #+#    #+#             */
/*   Updated: 2016/11/04 16:35:18 by bzmuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int res;

	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
	{
		res = 1;
		while (nb > 1)
		{
			res = res * nb;
			nb--;
		}
		return (res);
	}
}
