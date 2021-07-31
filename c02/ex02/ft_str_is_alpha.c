int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is_alpha;

	is_alpha = 1;
	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) < 'a' || *(str + i) > 'z')
		{
			if (*(str + i) < 'A' || *(str + i) > 'Z')
			{
				is_alpha = 0;
			}
		}
		i++;
	}
	return (is_alpha);
}
