/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wilkp90@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:14:11 by wprintes          #+#    #+#             */
/*   Updated: 2021/10/03 18:48:51 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	counter;
	char	*s1_val;
	char	*s2_val;

	counter = 0;
	s1_val = (char *)s1;
	s2_val = (char *)s2;
	result = malloc(sizeof(char) * (ft_strlen(s1_val) + ft_strlen(s2_val)) + 1);
	if (result == NULL)
		return (NULL);
	while (s1_val[counter] != '\0')
	{
		result[counter] = s1_val[counter];
		counter++;
	}
	counter = 0;
	while (s2_val[counter] != '\0')
	{
		result[ft_strlen(s1_val) + counter] = s2_val[counter];
		counter++;
	}
	result[ft_strlen(s1_val) + counter] = '\0';
	return (result);
}
