/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-aro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:32:56 by yael-aro          #+#    #+#             */
/*   Updated: 2025/07/20 17:33:25 by yael-aro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	colum;
	int	row;

	colum = 1;
	while (colum <= y)
	{
		row = 1;
		while (row <= x)
		{
			if ((row == 1 || row == x) && (colum == 1 || colum == y))
				ft_putchar('o');
			else if (colum == 1 || colum == y)
				ft_putchar('-');
			else if (row == 1 || row == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			row++;
		}
		ft_putchar('\n');
		colum++;
	}
}
