#include <unistd.h>
#include <stdio.h>

void	ft_print_comb2(void);
void	print_num(int value);

void	print_num(int value)
{
	int		i;
	char	string_num[3];

	i = 1;
	while (i <= 2)
	{
		string_num[2 - i] = value % 10 + '0';
		value /= 10;
		i++;
	}
	string_num[2] = '\0';
	write(1, string_num, 2);
}

void	ft_print_comb2(void)
{
	int	value1;
	int	value2;

	value1 = 0;
	value2 = 1;
	while (value1 <= 98)
	{
		while (value2 <= 99)
		{
			print_num(value1);
			write(1, " ", 1);
			print_num(value2);
			if (value1 != 98 && value2 != 00)
			{
				write(1, ", ", 2);
			}
			value2++;
		}
		value1++;
		value2 = value1 + 1;
	}
}
