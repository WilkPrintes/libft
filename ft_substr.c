/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wilkp90@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:39:34 by wprintes          #+#    #+#             */
/*   Updated: 2021/10/03 12:16:35 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t    s_len;
    char    *substr;

    if (!s)
        return (NULL);
    s_len = ft_strlen(s);
    if (start > s_len)
    {
        substr = ft_calloc(1, sizeof (char));
        if (!substr)
            return (NULL);
        return (substr);
    }
    if (s_len - start < len)
        len = s_len - start;
    substr = ft_calloc(len + 1, sizeof (char));
    if (!substr)
        return (NULL);
    ft_strlcpy(substr, s + start, len + 1);
    return (substr);
}
