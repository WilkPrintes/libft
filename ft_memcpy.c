/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wilkp90@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 00:40:28 by wprintes          #+#    #+#             */
/*   Updated: 2021/09/17 21:03:47 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			count;
	unsigned char	*dest_value;
	unsigned char	*src_value;

	count = 0;
	while (count < n)
	{
		src_value = (unsigned char *)(src + count);
		dest_value = (unsigned char *)(dest + count);
		*dest_value = *src_value;
		count++;
	}
	return (dest);
}
