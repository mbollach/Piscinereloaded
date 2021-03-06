/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbollach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 15:38:04 by mbollach          #+#    #+#             */
/*   Updated: 2016/11/18 16:54:49 by mbollach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < nb)
	{
		i++;
		j = i * i;
		if (j == nb)
			return (i);
	}
	return (0);
}
