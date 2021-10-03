/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wilkp90@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 00:42:03 by wprintes          #+#    #+#             */
/*   Updated: 2021/10/03 18:44:09 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

size_t	ft_strlen(const char *s);
void	*ft_bzero(char *str, size_t n);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isprint(int c);
void	*ft_memset(void *str, int c, size_t n);
char	*ft_strchr(const char *str, int c);
int		ft_tolower(int a);
int		ft_toupper(int c);
int		ft_atoi(const char *str);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *str1, const void *str2, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
void	*ft_memchr(const void *str, int c, size_t n);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *src);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	**ft_split(char const *s, char c);

#endif