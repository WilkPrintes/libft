/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wilkp90@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 10:19:56 by wprintes          #+#    #+#             */
/*   Updated: 2021/10/02 15:26:49 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char	*str1_char;
	unsigned char	*str2_char;
	size_t			result;
	size_t			counter;

	str1_char = (unsigned char *) str1;
	str2_char = (unsigned char *) str2;
	result = 0;
	counter = 0;
	if (n == 0)
		return (0);
	while (counter < n && *str1_char != '\0' && *str2_char != '\0')
	{
		if (*str1_char != *str2_char)
		{
			result = (unsigned int)*str1_char - (unsigned int)*str2_char;
			return (result);
		}
		counter++;
		str1_char++;
		str2_char++;
	}
	return (result);
}
