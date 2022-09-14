/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklingle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:57:08 by dklingle          #+#    #+#             */
/*   Updated: 2022/09/13 15:32:25 by dklingle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / 2)
	{
		if (!(nb % i))
			return (0);
		else
			i += 1;
	}
	return (1);
}

/*#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	(void) ac;

	printf("%d", ft_is_prime(atoi(av[1])));
	return (0);
}*/
