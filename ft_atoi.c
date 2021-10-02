/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wilkp90@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 23:33:03 by wprintes          #+#    #+#             */
/*   Updated: 2021/10/02 17:18:25 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	init_var(int *n1, int *n2, int *n3);

int	ft_atoi(const char *str)
{
	int		result;
	int		increment;
	int		negative;

	init_var(&result, &increment, &negative);
	if (str == "-2147483648")
		return (-2147483648);
	while (*str <= 13)
	{
		str++;
	}
	if (*str == 43 || *str == 45)
	{
		if (*str == 45)
			negative++;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		result = result * increment;
		result = result + (*str - '0');
		increment = 10;
		str++;
	}
	if (negative == 1)
		result = result * -1;
	return (result);
}

static void	init_var(int *n1, int *n2, int *n3)
{
	*n1 = 0;
	*n2 = 1;
	*n3 = 0;
}
