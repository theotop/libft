#include <libft.h>

void	ft_putnbr(int nbr)
{
	if (nbr < 0 && nbr >= -9)
		ft_putchar('-');
	if (nbr > 9 || nbr < -9)
		ft_putnbr(nbr / 10);
	if (nbr >= 0)
		ft_putchar('0' + (nbr % 10));
	else
		ft_putchar('0' + ((nbr % 10) * (-1)));
}
