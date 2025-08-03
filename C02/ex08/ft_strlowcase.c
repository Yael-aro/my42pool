/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-aro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 11:08:25 by yael-aro          #+#    #+#             */
/*   Updated: 2025/07/20 11:09:10 by yael-aro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

/*
#include <unistd.h>
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	ft_strlowcase(argv[1]);
	write(1, argv[1], strlen(argv[1]));
	write(1, "\n", 1);
	return (0);
}
*/
