/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklingle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 13:36:50 by dklingle          #+#    #+#             */
/*   Updated: 2022/09/07 14:46:05 by dklingle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main ()
{
	char	dest[9] = "Hello";
	char	dest2[9] = "Hello";
	char	src[] = "World";
	char	src2[] = "World";

	strncat(dest2, src2, 3);
	printf("Valeur vraie fonction : %s\n", dest2);

	ft_strncat(dest, src, 3);
	printf("Valeur copie fonction : %s", dest);
}*/
