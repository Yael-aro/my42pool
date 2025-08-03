/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-aro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 11:13:48 by yael-aro          #+#    #+#             */
/*   Updated: 2025/07/19 11:15:01 by yael-aro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*#include<stdio.h>
int main()
{
	int a = 6 ;
	int b = 8;
	int *p1= &a;
	int *p2 =&b ;
	ft_swap(p1,p2);
	printf("le valeur de a est %d \n la valeur de b est %d", a,b);


}*/
