/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wilkp90@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 23:57:33 by wprintes          #+#    #+#             */
/*   Updated: 2021/10/04 20:05:04 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	char	temp;

	if(!s || !fd)
		return (NULL);
	while (*s != '\0')
	{
		temp = *s;
		write(fd, &temp, 1);
		s++;
	}
}
