unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlen(char *str);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (*(src + i) != '\0' && i < size - 1)
		{
			*(dest + i) = *(src + i);
			i++;
		}
		*(dest + i) = '\0';
	}
	return (ft_strlen(src));
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	lenght;

	lenght = 0;
	while (*(str + lenght) != 0)
	{
		lenght++;
	}
	return (lenght);
}
