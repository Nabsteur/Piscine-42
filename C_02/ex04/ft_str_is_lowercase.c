/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklingle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:32:10 by dklingle          #+#    #+#             */
/*   Updated: 2022/09/05 14:52:29 by dklingle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
	c = "R";
	r = ft_str_is_lowercase(c);
	printf("Valeur : %d", r);
} */
