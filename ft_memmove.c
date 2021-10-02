/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wilkp90@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 00:40:31 by wprintes          #+#    #+#             */
/*   Updated: 2021/10/02 19:21:07 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			count;
	unsigned char	*dest_value;
	unsigned char	*src_value;

	if(!dest || !src || !n)
		return (NULL);
	src_value = (unsigned char *) src;
	dest_value = (unsigned char *) dest;
	count = 0;
	if (dest > src)
	{
		while (count < n)
		{
			dest_value[n - count - 1] = src_value[n - count - 1];
			count++;
		}
	}
	else
	{
		while (count < n)
		{
			dest_value[count] = src_value[count];
			count++;
		}
	}
	return (dest);
}
