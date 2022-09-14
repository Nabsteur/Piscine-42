/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklingle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:54:08 by dklingle          #+#    #+#             */
/*   Updated: 2022/09/05 15:00:43 by dklingle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
		}
		else
			return (0);
		i++;
	}
	return (1);
}

/* int main ()
{
	char *c;
	int r;

	c = "BAa";
	r = ft_str_is_numeric(c);
	printf("Valeur : %d", r);
}*/
