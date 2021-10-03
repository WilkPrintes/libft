/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wilkp90@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:20:45 by wprintes          #+#    #+#             */
/*   Updated: 2021/10/03 13:00:20 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*result;

	result = malloc(ft_strlen((char *)src) + 1);
	if (!result)
		return (NULL);
	ft_strlcpy(result, src, ft_strlen((char *) src) + 1);
	return (result);
}
