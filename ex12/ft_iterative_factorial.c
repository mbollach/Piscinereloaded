/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbollach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 12:03:30 by mbollach          #+#    #+#             */
/*   Updated: 2016/11/19 11:58:28 by mbollach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int j;

	i = nb - 1;
	if (nb > 12 || nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb == 0)
		return (1);
	while (i > 0)
	{
		j = nb * i;
		nb = j;
		i--;
	}
	return (j);
}
