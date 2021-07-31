char	*ft_strstr(char *str, char *to_find);
int		ft_strcmp(char *s1, char *s2);

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*finded;

	i = 0;
	finded = 0;
	if (to_find[0] == '\0')
	{
		finded = str;
	}
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			if (ft_strcmp(&str[i], to_find) == 0)
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (finded);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	diff = (int)(unsigned char) s1[i] - (int)(unsigned char) s2[i];
	return (diff);
}
