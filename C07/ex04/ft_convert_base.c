#include<stddef.h>
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	ft_atoi_base(char *str, char *base);
char	*ft_putnbr_base(int nbr, char *base);
int	is_valid_base(char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		decimal;
	char	*result;

	if (!is_valid_base(base_from) || !is_valid_base(base_to))
		return (NULL);
	decimal = ft_atoi_base(nbr, base_from);
	result = ft_putnbr_base(decimal, base_to);
	return (result);
}
