/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:08:48 by mraineri          #+#    #+#             */
/*   Updated: 2024/04/25 17:21:35 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
// Void Returns:
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
// Int's Returns:
int		ft_atoi(const char *nptr);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isalnum(int c); 
int		ft_isalpha(char c);
int		ft_isascii(int c);
int		ft_isdigit(char c);
int		ft_isprint(int c);
int		ft_strlen(char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
// Size_t Returns:
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
// Chars Returns:
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
#endif