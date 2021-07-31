#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);
void	ft_putnbr_base_rec(int nb, char *base, int base_len);
int		ft_base_len(char *base);
void	ft_vector_init(char *vec);

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = ft_base_len(base);
	if (base_len > 1)
	{
		ft_putnbr_base_rec(nbr, base, base_len);
	}
}

void	ft_putnbr_base_rec(int nb, char *base, int base_len)
{
	char	aux;

	if (nb >= 0 && nb < base_len)
	{
		aux = base[nb % base_len];
		write(1, &aux, 1);
		return ;
	}
	if (nb < 0)
	{
		aux = base[-1 * (nb % base_len)];
		write(1, "-", 1);
		nb /= -base_len;
		if (nb > 0)
			ft_putnbr_base_rec(nb, base, base_len);
		write(1, &aux, 1);
	}
	else
	{	
		aux = base[nb % base_len];
		nb /= base_len;
		ft_putnbr_base_rec(nb, base, base_len);
		write(1, &aux, 1);
	}
}

int	ft_base_len(char *base)
{
	int		i;
	char	values[256];

	i = 0;
	ft_vector_init(values);
	while (base[i] != '\0')
	{
		if (values[base[i] % 256] > 0)
		{
			i = -1;
			break ;
		}
		if (base[i] == '+' || base[i] == '-')
		{
			i = -1;
			break ;
		}
		values[base[i] % 256] = 1;
		i++;
	}
	return (i);
}

void	ft_vector_init(char *vec)
{
	int	i;

	i = 0;
	while (i < 256)
	{
		vec[i] = 0;
		i++;
	}
}
