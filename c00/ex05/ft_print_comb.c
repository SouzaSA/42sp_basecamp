#include <unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	value[3];

	value[0] = '0';
	value[1] = '1';
	value[2] = '2';
	while (value[0] <= '7')
	{
		while (value[1] <= '8')
		{
			while (value[2] <= '9')
			{
				write(1, value, 3);
				if (value[0] != '7' || value[1] != '8' || value[2] != '9')
					write(1, ", ", 2);
				value[2] += 1;
			}
			value[1] += 1;
			value[2] = value[1] + 1;
		}
		value[0] += 1;
		value[1] = value[0];
	}
}
