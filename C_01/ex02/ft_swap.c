/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklingle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 19:06:16 by dklingle          #+#    #+#             */
/*   Updated: 2022/09/02 10:40:39 by dklingle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

/* int	main()
{
	int a;
	int b;

	a = 21;
	b = 42;
	ft_swap(&a, &b);	
	printf("Valeur de a : %d \n", a);
	printf("Valeur de b : %d", b);
} */
