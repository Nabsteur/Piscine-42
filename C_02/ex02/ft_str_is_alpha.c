/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklingle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:02:18 by dklingle          #+#    #+#             */
/*   Updated: 2022/09/05 15:51:18 by dklingle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* int main ()
{
	char *c;
	int r;

	c = " ";
	r = ft_str_is_alpha(c);
	printf("Valeur : %d", r);
	return (0);
} */
