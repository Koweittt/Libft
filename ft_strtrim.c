/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abignals <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 19:35:59 by abignals          #+#    #+#             */
/*   Updated: 2025/04/28 19:44:39 by abignals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlenset(char *str, const char *set)
{
	int	i;
	int	tot;

	i = 0;
	while (str[i])
	{
		if (ft_isset(str[i], set) == 0)
			tot++;
		i++;
	}
	return (tot + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*sc;
	int		i;
	int		w;

	i = 0;
	sc = malloc(ft_strlenset(s1, set) * sizeof(char));
	if (!sc)
		return (NULL);
	while (s1[i])
	{
		if (ft_isset(s1[i], set) == 0)
		{
			sc[w] = s1[i];
			w++;
		}
		i++;
	}
	return (sc);
}
