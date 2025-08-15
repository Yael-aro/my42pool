#include <stdlib.h>
#include<stddef.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_valid_base(char *base)
{
	int i = 0;
	int j;

	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	base_index(char c, char *base)
{
	int i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	skip_spaces_and_signs(char *str, int *sign)
{
	int i = 0;

	*sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			*sign *= -1;
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int i;
	int sign;
	int result = 0;
	int index;
	int base_len = ft_strlen(base);

	i = skip_spaces_and_signs(str, &sign);
	while ((index = base_index(str[i], base)) != -1)
	{
		result = result * base_len + index;
		i++;
	}
	return (result * sign);
}

int	ft_nbrlen(int nbr, int base_len)
{
	int len = (nbr <= 0) ? 1 : 0;

	while (nbr)
	{
		nbr /= base_len;
		len++;
	}
	return (len);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	int base_len = ft_strlen(base);
	int len = ft_nbrlen(nbr, base_len);
	char *str;
	long nb = nbr;

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = base[0];
	while (nb)
	{
		str[--len] = base[nb % base_len];
		nb /= base_len;
	}
	return (str);
}
