/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklingle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:47:21 by dklingle          #+#    #+#             */
/*   Updated: 2022/09/05 16:07:45 by dklingle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 32 && str[i] <= 126)
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

	c = "$";
	r = ft_str_is_printable(c);
	printf("Valeur : %d", r);
}*/
