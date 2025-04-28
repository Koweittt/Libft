/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abignals <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 18:10:51 by abignals          #+#    #+#             */
/*   Updated: 2025/04/28 18:20:22 by abignals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(int taille, int b)
{
	int		i;
	void	*ret;

	i = 0;
	ret = malloc(taille * sizeof(b));
	if (!ret)
		return (NULL);
	while (i < taille)
	{
		ret[i] = 0;
		i++;
	}
	return (ret);
}
