/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-aro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:46:24 by yael-aro          #+#    #+#             */
/*   Updated: 2025/07/19 13:47:31 by yael-aro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*#include<stdio.h>
int main()
{
	int a = 5;
	int b = 6;
	ft_ultimate_div_mod(&a, &b);
	printf("  a = %d    ", a);
	printf("  b = %d   ",b);
}*/
