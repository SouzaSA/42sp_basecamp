char	*ft_strcapitalize(char *str);
char	*ft_strlowcase(char *str);
int		ft_is_alnum(char str);

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	previous;

	i = 0;
	previous = '\0';
	str = ft_strlowcase(str);
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z' )
		{
			if (ft_is_alnum(previous) == 0)
			{
				*(str + i) -= 32;
			}
		}
		previous = *(str + i);
		i++;
	}
	return (str);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 'A' && *(str + i) <= 'Z')
		{
			*(str + i) += 32;
		}
		i++;
	}
	return (str);
}

int	ft_is_alnum(char letter)
{
	int	is_alnum;

	is_alnum = 1;
	if (letter < 'a' || letter > 'z')
	{
		if (letter < 'A' || letter > 'Z')
		{
			if (letter < '0' || letter > '9')
			{
				is_alnum = 0;
			}
		}
	}
	return (is_alnum);
}
