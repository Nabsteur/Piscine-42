/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklingle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 12:53:34 by dklingle          #+#    #+#             */
/*   Updated: 2022/09/05 15:44:00 by dklingle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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

	c = "HY";
	r = ft_str_is_uppercase(c);

	printf("Valeur : %d", r);
	return (0);
}*/
