int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	is_uppercase;

	i = 0;
	is_uppercase = 1;
	while (*(str + i) != '\0')
	{
		if (*(str + i) < 'A' || *(str + i) > 'Z')
		{
			is_uppercase = 0;
		}
		i++;
	}
	return (is_uppercase);
}
