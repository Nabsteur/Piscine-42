/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklingle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:23:19 by dklingle          #+#    #+#             */
/*   Updated: 2022/09/11 17:45:00 by dklingle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_display_solution(int tab[4][4]);

int	ft_check(int ac, char **av)
{
	int	i;

	if (ac != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (ft_strlen(av[1]) != 31)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	i = -1;
	while (av[1][i++])
	{
		if (av[1][i] != ' ')
		{
			if (av[1][i] < '1' || av[1][i] > '4')
			{
				write(1, "Error\n", 6);
				return (0);
			}
		}
	}
	return (1);
}

void	ft_totalcheck(int ac, char **av, char *str, int tab[4][4])
{
	if (ft_check(ac, av) == 1)
	{
		if (!ft_strcmp(av[1], str))
			ft_display_solution(tab);
		else
			write(1, "Error\n", 6);
	}
}
