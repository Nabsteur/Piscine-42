/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklingle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 09:43:54 by dklingle          #+#    #+#             */
/*   Updated: 2022/09/02 15:20:35 by dklingle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int main ()
{
	int a;
	int b;
	int div;
	int mod;
	int *ptr1;
	int *ptr2;
	
	a = 10;
	b = 3;

	ptr1 = &div;
	ptr2 = &mod;
	

	ft_div_mod(a, b, ptr1, ptr2);
	printf("Resultat : %d \n", div);
	printf("Reste : %d", mod);
} */
