/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbollach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 10:51:09 by mbollach          #+#    #+#             */
/*   Updated: 2016/11/24 16:14:14 by mbollach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort(char **argv)
{
	int		i;
	int		t;
	char	*mem;

	i = 1;
	t = 0;
	while (argv[i + 1])
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			mem = argv[i + 1];
			argv[i + 1] = argv[i];
			argv[i] = mem;
			t++;
		}
		i++;
	}
	if (t != 0)
		ft_sort(argv);
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 1)
		return (0);
	ft_sort(argv);
	while (argc > i)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
