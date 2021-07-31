int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				diff;

	i = 0;
	diff = 0;
	if (n > 0)
	{
		while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		{
			i++;
		}
		diff = (int)(unsigned char) s1[i] - (int)(unsigned char) s2[i];
	}
	return (diff);
}
