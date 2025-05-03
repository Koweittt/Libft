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

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	t;

	if (!big || !little)
		return (NULL);
	if (ft_strlen(little) == 0)
		return ((char *) big);
	i = 0;
	while (big[i] && i < len)
	{
		t = 0;
		while (big[i + t] == little[t] && big[i + t] && i + t < len)
			t++;
		if (t == ft_strlen(little))
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
