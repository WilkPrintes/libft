/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wilkp90@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 08:24:03 by wprintes          #+#    #+#             */
/*   Updated: 2021/10/03 18:21:49 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	counter_c(char *s, char c);
static char **test(char *s, char **result, size_t separator, char c);

char **ft_split(char const *s, char c)
{
	char	**result;
	size_t		separator;

	separator = counter_c((char *) s, c);
	result = ft_calloc(separator + 1, sizeof(char *));
	if (separator == 1 )
	{
		result[0] = ft_strtrim((char *) s, &c);
		result[1] = NULL;
		return (result);
	}
	if (result == NULL)
		return (NULL);
	return (test((char *)s, result, separator, c));
}

static size_t	counter_c(char *s, char c)
{
	int result;

	result = 0;
	while(*s != '\0')
	{
		if(*s != c)
		{
			while(*s != c && *s != '\0')
				s++;
			result++;
		}
		else
			s++;
	}
	return (result);
}

static char **test(char *s, char **result, size_t separator, char c)
{
	size_t count = 0;
	size_t temp = 0;
	size_t 	index_r;

	index_r = 0;
	while(s[count] != '\0' && separator != 0)
	{
		if (s[count] == c)
		{
			if (count != 0 || separator == 1)
			{
				result[index_r] = ft_substr(s, temp, count - temp);
				while (s[count] == c)
					count++;
				temp = count;
				index_r++;
				separator--;
			}
			else
			{
				while (s[count] == c)
					count++;
				temp = count;
			}
		}
		else
			count++;
	}
	if (separator != 0)
	{
		result[index_r] = ft_substr(s, temp, count - temp );
		index_r++;
	}

	return (result);
}
