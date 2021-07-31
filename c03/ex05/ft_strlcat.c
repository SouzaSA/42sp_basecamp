unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;
	int				total_size;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	total_size = src_len + size;
	if (size > dest_len)
	{
		while (src[i] != '\0' && dest_len + i < size - 1)
		{
			dest[dest_len + i] = src[i];
			i++;
		}
		dest[dest_len + i] = '\0';
		total_size = dest_len + src_len;
	}
	return (total_size);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	lenght;

	lenght = 0;
	while (str[lenght] != 0)
	{
		lenght++;
	}
	return (lenght);
}
