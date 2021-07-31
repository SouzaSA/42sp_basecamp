char	*ft_strncat(char *dest, char *src, unsigned int nb);
int		ft_strlen(char *str);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dest_lenght;

	i = 0;
	dest_lenght = ft_strlen(dest);
	while (src[i] != '\0' && i < nb)
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
