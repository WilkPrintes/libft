/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wilkp90@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 00:39:41 by wprintes          #+#    #+#             */
/*   Updated: 2021/09/16 00:39:48 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(char *str, size_t n)
{
	int	counter;

	counter = 0;
	while (counter < n)
	{
		str[counter] = '\0';
		counter ++;
	}
	return (str);
}
