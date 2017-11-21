#include <libft.h>

void	ft_putnbr_fd(int nbr, int fd)
{
	if (nbr < 0 && nbr >= -9)
		ft_putchar_fd('-', fd);
	if (nbr > 9 || nbr < -9)
		ft_putnbr_fd(nbr / 10, fd);
	if (nbr >= 0)
		ft_putchar_fd('0' + (nbr % 10), fd);
	else
		ft_putchar_fd('0' + ((nbr % 10) * (-1)), fd);
}
