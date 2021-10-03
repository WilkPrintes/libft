/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wilkp90@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:39:34 by wprintes          #+#    #+#             */
/*   Updated: 2021/10/03 12:45:19 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	counter;
	size_t	s_len;

	counter = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen((char *)s);
	if (start > ft_strlen((char *)(s)))
		return (ft_calloc(1, 1));
	if (s_len - start < len)
		len = s_len - start;
	result = ft_calloc(sizeof(char), len + 1 );
	if(!result)
		return (NULL);
	while (counter < len && s[counter + start] != '\0')
	{
		result[counter] = s[counter + start];
		counter++;
	}
	result[counter] = '\0';
	return (result);
}
