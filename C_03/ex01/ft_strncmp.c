/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklingle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 10:09:08 by dklingle          #+#    #+#             */
/*   Updated: 2022/09/07 15:08:33 by dklingle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

/*int	main (void)
{
	char	s1[] = "abC";
	char	s2[] = "abcd";
	int	r;
	int	r2;

	r2 = strncmp(s1, s2, 4);
	printf("valeur vraie fonction : %d\n", r2);
	r = ft_strncmp(s1, s2, 4);
	printf("Valeur copie fonction : %d", r);
	return (0);
}*/
