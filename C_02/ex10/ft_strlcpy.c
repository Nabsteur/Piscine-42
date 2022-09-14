/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklingle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 11:37:41 by dklingle          #+#    #+#             */
/*   Updated: 2022/09/06 17:33:07 by dklingle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h>*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	r;

	i = 0;
	r = 0;
	while (src[r])
		r++;
	if (size < 1)
		return (r);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}	
	dest[i] = '\0';
	return (r);
}
/* int main ()
{
	char	dest[10] = "Hellokek";
	char	dest2[10] = "Hellokek";
	char	src[10] = "Worlds";
	int size = 3;
	int nb = ft_strlcpy(dest, src, size);
	printf("Valeur : %s", dest);
	long nb2 = strlcpy(dest2, src, size);
	printf("\t vraie : %s\n", dest2);
	printf("%d VS %ld\n", nb, nb2);
	return (0);
}*/
