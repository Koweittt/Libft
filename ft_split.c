#include <stdlib.h>
#include <stdio.h>

int	ft_count_words(char *str, char c)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (str[i])
	{
		if (str[i] != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (str[i] == c)
			in_word = 0;
		i++;
	}
	return (count);
}

char	**ft_fill_tab(char **tab, char *str, char c)
{
	int	i;
	int	t;
	int	j;
	int	start;

	i = 0;
	t = 0;
	while (str[i] && t < ft_count_words(str, c))
	{
		while (str[i] == c)
			i++;
		start = i;
		while (str[i] && str[i] != c)
			i++;
		tab[t] = malloc(i - start + 1);
		if (!tab[t])
			return (NULL);
		j = 0;
		while (start < i)
			tab[t][j++] = str[start++];
		t++;
	}
	return (tab);
}

char	**ft_split(char *s, char c)
{
	char	**tab;

	tab = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	tab = ft_fill_tab(tab, s, c);
	tab [ft_count_words(s, c)] = NULL;
	return (tab);
}

int	main(int argc, char **argv)
{
	char	**tab;
	int		i;

	i = 0;
	if (argc < 2)
		return (0);
	if (argc > 2)
		return (0);
	if (argc == 2)
	{
		tab = ft_split(argv[1], ' ');
		while (tab[i])
		{
			printf("%s\n", tab[i]);
			i++;
		}
	}
	return (0);
}
