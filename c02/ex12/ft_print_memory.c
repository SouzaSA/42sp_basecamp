#include <unistd.h>

void	*ft_print_memory(void *addr, unsigned int size);
int		ft_char_is_printable(unsigned char *addr_char);
void	ft_char_hex_line_print(unsigned char *addr_char, unsigned int residue);
void	ft_char_line_print(unsigned char *addr_char, unsigned int residue);
void	ft_addr_to_hex_print(unsigned char *addr_char);

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*addr_char;

	i = 0;
	addr_char = (unsigned char *) addr;
	while (i < size)
	{
		ft_addr_to_hex_print (addr_char + i);
		ft_char_hex_line_print(addr_char + i, size - i);
		ft_char_line_print(addr_char + i, size - i);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}

int	ft_char_is_printable(unsigned char *addr_char)
{
	int				is_printable;

	is_printable = 1;
	if (*addr_char < 32 || *addr_char > 126)
	{
		is_printable = 0;
	}
	return (is_printable);
}

void	ft_char_hex_line_print(unsigned char *addr_char, unsigned int residue)
{
	unsigned int	i;
	char			*hex_values;

	i = 0;
	hex_values = "0123456789abcdef";
	while (i < 16)
	{
		if (i < residue)
		{
			if (i % 2 == 0)
				write(1, " ", 1);
			write(1, &hex_values[*(addr_char + i) / 16], 1);
			write(1, &hex_values[*(addr_char + i) % 16], 1);
		}
		else
		{
			write(1, " ", 1);
		}
		i++;
	}
}

void	ft_char_line_print(unsigned char *addr_char, unsigned int residue)
{
	unsigned int	i;

	i = 0;
	write(1, " ", 1);
	while (i < 16 && i < residue)
	{
		if (ft_char_is_printable(addr_char + i))
		{
			write(1, (addr_char + i), 1);
		}
		else
		{
			write(1, ".", 1);
		}
		i++;
	}
}

void	ft_addr_to_hex_print (unsigned char *addr_char)
{
	int				i;
	char			hex_str[16];
	char			*hex_values;
	unsigned int	addr_int;

	i = 0;
	addr_int = (unsigned int) addr_char;
	hex_values = "0123456789abcdef";
	while (i < 16)
	{
		hex_str[15 - i] = hex_values[addr_int % 16];
		addr_int /= 16;
		i++;
	}
	write (1, hex_str, 16);
	write (1, ":", 1);
}
