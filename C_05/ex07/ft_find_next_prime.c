/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklingle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 09:47:47 by dklingle          #+#    #+#             */
/*   Updated: 2022/09/13 16:42:10 by dklingle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb % 2 == 0)
		return (0);
	while (i <= nb / 2)
	{
		if (!(nb % i))
			return (0);
		else
			i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!(ft_is_prime(nb)))
	{
		nb++;
	}
	return (nb);
}
/*#include <stdio.h>

int	main(void)
{
	int	nb;
	int	result;

	nb = 130235;
	result = ft_find_next_prime(nb);
	printf("Le nombre premier immediatement >= %d est %d\n", nb, result);
	return (0);
}*/
