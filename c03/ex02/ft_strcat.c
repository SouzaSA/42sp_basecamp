char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *str);

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_lenght;

	i = 0;
	dest_lenght = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[dest_lenght + i] = src[i];
		i++;
	}
	dest[dest_lenght + i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != 0)
	{
		c++;
	}
	return (c);
}
