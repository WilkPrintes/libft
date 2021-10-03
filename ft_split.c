/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wilkp90@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 08:24:03 by wprintes          #+#    #+#             */
/*   Updated: 2021/10/03 11:56:21 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter_c(char *s, char c);

char **ft_split(char const *s, char c)
{
	char	**result;
	int		separator;
	int		temp;
	size_t	count;
	int 	index_r;

	count = 0;
	index_r = 0;
	temp = 0;
	separator = counter_c((char *) s, c);
	if (ft_strlen((char *) s) == separator)
	{
		result = malloc(sizeof(char *));
		result[0] = NULL;
		return (result);
	}
	if (separator == 0 )
	{
		result = malloc (sizeof(char *) * (ft_strlen((char *) s) + 1));
		result[0] = (char *) s;
		result[1] = '\0';
		return (result);
	}
	result = malloc (sizeof(char **) * (ft_strlen((char *) s) - separator + 1));
	if (result == NULL)
		return (NULL);
	while(s[count] != '\0' && separator != 0)
	{
		if (s[count] == c)
		{
			if (count != 0)
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
		count++;
	}
	if (separator != 0)
	{
		result[index_r] = ft_substr(s, temp, count - temp);
		index_r++;
	}
	result[index_r] = NULL;
	return (result);
}

static int	counter_c(char *s, char c)
{
	int result;

	result = 0;
	while(*s != '\0')
	{
		if(*s == c)
		{
			while(*s == c)
				s++;
			if (*s != '\0')
				result++;
		}
		s++;
	}
	return (result);
}
