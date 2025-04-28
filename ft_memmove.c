/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abignals <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 15:06:37 by abignals          #+#    #+#             */
/*   Updated: 2025/04/28 15:13:08 by abignals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memmove(void *dest, void *src, int size)
{
	int		i;
	void	*temp;

	i = 0;
	while (i < size)
	{
		temp[i] = src[i];
		i++;
	}
	i = 0;
	while (i < size)
	{
		dest[i] = temp[i];
		i++;
	}
	return (&dest[0]);
}
