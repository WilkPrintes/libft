/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wilkp90@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 00:40:28 by wprintes          #+#    #+#             */
/*   Updated: 2021/10/03 14:55:04 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			count;
	char	*dest_value;
	char	*src_value;

	src_value = (char *) src;
	dest_value = (char *) dest;
	count = 0;
	if (dest > src)
	{
		while (count < n)
		{
			dest_value[n - count - 1] = src_value[n - count - 1];
			count++;
		}
	}
	else if (dest < src)
	{
		while (count < n)
		{
			dest_value[count] = src_value[count];
			count++;
		}
	}
	return (dest);
}
