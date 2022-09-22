/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklingle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:06:39 by dklingle          #+#    #+#             */
/*   Updated: 2022/09/19 16:30:27 by dklingle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*b;
	int	*d;

	i = 0;
	range = max - min;
	b = malloc(range * sizeof(int));
	d = b;
	if (min >= max)
		return (0);
	if (!d)
		return (0);
	while (i < range)
	{
		b[i] = min + i;
		i++;
	}
	return (b);
}
/*#include <stdio.h>
int	main(void)
{
	int min;
	int max;
	int *tab;
	int i = 0;
	int size;

	min = -494;
	max = 214748364;
	size = max - min;
	tab = ft_range(min, max);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	return (0);
}*/
