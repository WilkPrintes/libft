/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wilkp90@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:14:11 by wprintes          #+#    #+#             */
/*   Updated: 2021/10/03 13:08:27 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	counter;
	char	*s1_value;
	char	*s2_value;

	counter = 0;
	s1_value = (char *)s1;
	s2_value = (char *)s2;
	result = ft_calloc(sizeof(char), (ft_strlen(s1_value) + ft_strlen(s2_value)) + 1);
	while (s1_value[counter] != '\0')
	{
		result[counter] = s1_value[counter];
		counter++;
	}
	counter = 0;
	while (s2_value[counter] != '\0')
	{
		result[ft_strlen(s1_value) + counter] = s2_value[counter];
		counter++;
	}
	result[ft_strlen(s1_value) + counter] = '\0';
	return (result);
}
