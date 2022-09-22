/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklingle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:00:07 by dklingle          #+#    #+#             */
/*   Updated: 2022/09/11 17:46:51 by dklingle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_totalcheck(int ac, char **av, char *str, int tab[4][4]);

int	main(int ac, char **av)
{
	int		tab[4][4];
	char	*str;

	tab[0][0] = 1;
	tab[0][1] = 2;
	tab[0][2] = 3;
	tab[0][3] = 4;
	tab[1][0] = 2;
	tab[1][1] = 3;
	tab[1][2] = 4;
	tab[1][3] = 1;
	tab[2][0] = 3;
	tab[2][1] = 4;
	tab[2][2] = 1;
	tab[2][3] = 2;
	tab[3][0] = 4;
	tab[3][1] = 1;
	tab[3][2] = 2;
	tab[3][3] = 3;
	str = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	ft_totalcheck(ac, av, str, tab);
	return (0);
}
