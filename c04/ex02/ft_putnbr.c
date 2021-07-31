#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	char	aux;

	if (nb >= 0 && nb < 10)
	{
		aux = nb % 10 + '0';
		write(1, &aux, 1);
		return ;
	}
	if (nb < 0)
	{
		aux = -1 * (nb % 10) + '0';
		write(1, "-", 1);
		nb /= -10;
		if (nb > 0)
			ft_putnbr(nb);
		write(1, &aux, 1);
	}
	else
	{	
		aux = nb % 10 + '0';
		nb /= 10;
		ft_putnbr(nb);
		write(1, &aux, 1);
	}
}
