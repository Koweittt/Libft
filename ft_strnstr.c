/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abignals <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 16:27:27 by abignals          #+#    #+#             */
/*   Updated: 2025/04/28 16:31:06 by abignals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strnstr(const char *big, const char *little, int len)
{
	int	i;
	int	t;

	i = 0;
	while (big[i])
	{
		t = 0;
		while (big[i + t] == little[t])
		{
			if (t == len)
				return (&big[i]);
			t++;
		}
		i++;
	}
	return (big);
}
