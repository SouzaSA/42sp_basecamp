#include <unistd.h>

void	ft_putnbr(int nb);
int		get_number_lenght(int n);
void	vector_initializer(char *vector, int size);

void	ft_putnbr(int nb)
{
	int		i;
	int		number_lenght;
	char	value[11];

	i = 0;
	number_lenght = get_number_lenght(nb);
	vector_initializer(value, 11);
	if (nb < 0 )
	{
		value[0] = '-';
		value[number_lenght] = -1 * (nb % 10) + '0';
		number_lenght++;
		i++;
		nb /= -10;
	}
	while (nb > 0)
	{
		value[number_lenght - i - 1] = nb % 10 + '0';
		nb /= 10;
		i++;
	}
	write(1, value, number_lenght);
}

int	get_number_lenght(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

void	vector_initializer(char *vector, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		vector[i] = '\0';
		i++;
	}
}
