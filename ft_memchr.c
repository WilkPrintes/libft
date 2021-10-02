/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wilkp90@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 00:40:20 by wprintes          #+#    #+#             */
/*   Updated: 2021/10/02 12:18:02 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned int	counter;
	unsigned int	validation;
	unsigned char	*str_p;
	char			*result;

	if (n == 0)
		return (NULL);
	counter = 0;
	validation = 0;
	str_p = (unsigned char *) str;
	while (counter <= n)
	{
		if (*str_p == (unsigned char)c)
		{
			validation = 1;
			break ;
		}
		str_p++;
		counter++;
	}
	if (validation == 1)
		return (result = str_p);
	return (NULL);
}
