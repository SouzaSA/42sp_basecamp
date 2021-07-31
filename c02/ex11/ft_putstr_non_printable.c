#include <unistd.h>

void	ft_putstr_non_printable(char *str);
int		ft_char_is_printable(char str);
void	ft_char_to_hex_print(unsigned char letter);

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (ft_char_is_printable(*(str + i)))
		{
			write(1, (str + i), 1);
		}
		else
		{
			write(1, "\\", 1);
			ft_char_to_hex_print(*(str + i));
		}
		i++;
	}
}

int	ft_char_is_printable(char str)
{
	int	i;
	int	is_printable;

	i = 0;
	is_printable = 1;
	if (str < 32 || str > 126)
	{
		is_printable = 0;
	}
	i++;
	return (is_printable);
}

void	ft_char_to_hex_print(unsigned char letter)
{
	char	*hex_values;

	hex_values = "0123456789abcdef";
	write(1, &hex_values[letter / 16], 1);
	write(1, &hex_values[letter % 16], 1);
}
