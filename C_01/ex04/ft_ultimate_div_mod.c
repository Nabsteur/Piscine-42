/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklingle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 10:46:17 by dklingle          #+#    #+#             */
/*   Updated: 2022/09/03 09:19:47 by dklingle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/* int	main()
{
	int a;
	int b;
	int *ptr1;
	int *ptr2;

	a = 10;
	b = 3;

	ptr1 = &a;
	ptr2 = &b;

	ft_ultimate_div_mod(ptr1, ptr2);

	printf("Divison : %d\n", a);
	printf("Reste : %d\n", b);

} */
