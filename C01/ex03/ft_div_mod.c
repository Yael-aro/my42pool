/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-aro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:45:12 by yael-aro          #+#    #+#             */
/*   Updated: 2025/07/19 13:45:14 by yael-aro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*#include<stdio.h>
int main() {
	int a = 15;
	int b = 3;
	int *div = &a;
	int *mod = &b;
	ft_div_mod(a,b,div,mod);
	printf("la valeur de a est %d \n les valeur de b est %d",a,b);

}*/
