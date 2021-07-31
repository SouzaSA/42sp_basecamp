int		ft_atoi_base(char *str, char *base);
int		ft_atoi_num(char *str, char *base, int base_len, int idx);
int		ft_base_len(char *base);
int		ft_find_base(char *base, char to_find, int base_len);
void	ft_vector_init(char *vec);

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	result;
	int	signal;
	int	base_len;

	i = 0;
	result = 0;
	signal = -1;
	base_len = ft_base_len(base);
	if (base_len > 1)
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		{
			i++;
		}
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				signal *= -1;
			i++;
		}
		result = ft_atoi_num(str, base, base_len, i);
	}
	return (signal * result);
}

int	ft_atoi_num(char *str, char *base, int base_len, int idx)
{
	int	i;
	int	result;

	i = idx;
	result = 0;
	while (ft_find_base(base, str[i], base_len) >= 0 && str[i] != '\0')
	{
		result = result * base_len - ft_find_base(base, str[i], base_len);
		i++;
	}
	return (result);
}

int	ft_base_len(char *base)
{
	int		i;
	int		finded;
	int		spaces;
	int		signals;
	char	values[256];

	i = 0;
	ft_vector_init(values);
	while (base[i] != '\0')
	{
		finded = values[base[i] % 256] > 0;
		spaces = (base[i] >= 9 && base[i] <= 13) || base[i] == 32;
		signals = base[i] == '+' || base[i] == '-';
		if (finded || spaces || signals)
		{
			i = -1;
			break ;
		}
		values[base[i] % 256] = 1;
		i++;
	}
	return (i);
}

int	ft_find_base(char *base, char to_find, int base_len)
{
	int	i;

	i = 0;
	while (base[i] != 0 && base[i] != to_find)
	{
		i++;
	}
	if (i == base_len)
	{
		i = -1;
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
