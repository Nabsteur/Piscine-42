/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklingle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:14:10 by dklingle          #+#    #+#             */
/*   Updated: 2022/09/07 15:08:30 by dklingle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
    
	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main()
{
	char s1[] = "ab";
	char s2[] = "abcd";
	int r;
	int r2;

	r = strcmp(s1, s2);
	printf("Valeur vraie fonction : %d\n", r);
	
	r2 = ft_strcmp(s1, s2);
	printf("Valeur copie fonction : %d", r2);
	return (0);
}*/
