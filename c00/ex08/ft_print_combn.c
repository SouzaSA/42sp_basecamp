#include <unistd.h>

void	ft_print_combn(int n);
void	print_val_rec(char *val, int start, int idx, int n);
void	vector_initializer(char *vector, int size);

void	ft_print_combn(int n)
{
	char	val[10];

	vector_initializer(val, n);
	print_val_rec(val, 0, 0, n);
}

void	print_val_rec(char *val, int start, int idx, int n)
{
	int		i;
	char	elements[10];

	i = start;
	vector_initializer(elements, 10);
	if (idx == n)
	{
		write(1, val, n);
		if (val[0] != 10 - n + '0')
		{
			write(1, ", ", 2);
		}
		return ;
	}
	while ((idx + i) < 10)
	{
		val[idx] = elements[idx + i];
		print_val_rec(val, i, idx + 1, n);
		i++;
	}
}

void	vector_initializer(char *vector, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		vector[i] = '0' + i;
		i++;
	}
}
