/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklingle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:00:29 by dklingle          #+#    #+#             */
/*   Updated: 2022/09/13 14:33:07 by dklingle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	result = nb;
	if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	i = 1;
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

/*int main(void)
{
	int nb;
	int power;
	int	result;

	nb = 10;
	power = -1;
	result = ft_iterative_power(nb, power);
	printf("%d puissance %d = %d", nb, power, result);
	return (0);
}*/
