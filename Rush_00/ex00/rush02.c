/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklingle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 16:29:23 by dklingle          #+#    #+#             */
/*   Updated: 2022/09/04 13:29:22 by dklingle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_if_1(int x, int y, int i, int j)
{
	if (j == 1)
	{
		ft_putchar('A');
	}
	else if (j == y)
	{
		ft_putchar('C');
	}
	else if (i == 1 || i == x)
	{
		ft_putchar('B');
	}
}

void	ft_if_2(int y, int j)
{
	if (j == 1 || j == y)
	{
		ft_putchar('B');
	}
	else if (1 < j < y)
	{
		write(1, " ", 1);
	}
}

void	rush2(int x, int y, int i, int j)
{
	if (i == 1 || i == x)
	{
		ft_if_1(x, y, i, j);
	}
	else if (1 < i < x)
	{
		ft_if_2(y, j);
	}
	if (i == x)
	{
		write(1, "\n", 1);
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x < 0 || y < 0)
	{
		write (1, "Only positive number! Please try again\n", 39);
		return ;
	}
	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			rush2(x, y, i, j);
			i++;
		}
		j++;
	}
}
