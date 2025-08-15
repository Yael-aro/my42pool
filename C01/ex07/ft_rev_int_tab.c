/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-aro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:36:31 by yael-aro          #+#    #+#             */
/*   Updated: 2025/07/19 14:37:46 by yael-aro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;
	int	j;

	i = 0;
	j = size -1;
	while (i < j)
	{
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp ;
		i++;
		j--;
	}
}
/*
#include<stdio.h>
int main()
{
	int tab[]= {1,2,3,4};
	int size = 4;
	ft_rev_int_tab(tab,size);
	int i = 0;
	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}*/
