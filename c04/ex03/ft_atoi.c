int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	signal;

	i = 0;
	result = 0;
	signal = -1;
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
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 - str[i] + '0';
		i++;
	}
	return (signal * result);
}
