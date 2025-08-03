/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-aro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 11:06:09 by yael-aro          #+#    #+#             */
/*   Updated: 2025/07/20 11:07:06 by yael-aro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*#include<unistd.h>
#include<string.h>
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	ft_strupcase(argv[1]);
	write(1, argv[1], strlen(argv[1]));
	write(1, "\n", 1);
	return (0);
}*/
