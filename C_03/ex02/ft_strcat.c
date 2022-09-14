/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklingle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 11:01:39 by dklingle          #+#    #+#             */
/*   Updated: 2022/09/07 13:36:17 by dklingle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
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
	char	dest[15] = "Hello";
	char	dest2[15] = "Hello";
	char	src[] = "World";
	char	src2[] = "World";

	ft_strcat(dest, src);
	printf("Valeur : %s\n", dest);

	strcat(dest2, src2);
	printf("Valeur vraie fonction : %s", dest2);


}*/
