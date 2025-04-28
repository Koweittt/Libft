/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abignals <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 15:17:35 by abignals          #+#    #+#             */
/*   Updated: 2025/04/28 15:49:42 by abignals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	dest_len = 0;
	src_len = 0;
	while (dest[dest_len] && dest_len < size)
	{
		dest_len++;
	}
	while (src[src_len])
	{
		src_len++;
	}
	if (size <= dest_len)
		return (size + src_len);
	while (src[i] && (dest_len + i) < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (dest_len + i != size)
		dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
