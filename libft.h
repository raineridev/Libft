/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:08:48 by mraineri          #+#    #+#             */
/*   Updated: 2024/04/20 16:57:53 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdio.h>
# include <string.h>
// Void Returns:
void	*ft_memset(void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
// Int's Returns:
int		ft_isalnum(int c); 
int		ft_isalpha(char c);
int		ft_isascii(int c);
int		ft_isdigit(char c);
int		ft_isprint(int c);
int		ft_strlen(char *str);
// Size_t Returns:
size_t	ft_strlcat(char *dst, const char *src, size_t size);
// Chars Returns:
char    *ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
#endif
