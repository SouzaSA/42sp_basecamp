#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_bubble_sort(char **tab, int size);

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	ft_bubble_sort(argv, argc);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
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

void	ft_bubble_sort(char **tab, int size)
{
	int		i;
	int		j;
	char	*aux;

	i = 1;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				aux = tab[i];
				tab[i] = tab[j];
				tab[j] = aux;
			}
			j++;
		}
		i++;
	}
}
