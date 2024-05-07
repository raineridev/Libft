/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:59:37 by mraineri          #+#    #+#             */
/*   Updated: 2024/05/02 15:32:01 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	char    *dst;
	if (!s)
		return (NULL);
	size = ft_strlen((char *) s) - start;
	if (start >= ft_strlen((char *) s))
		return ("");
	if (size > len)
		size = len;
	dst = ft_calloc(sizeof(char), size + 1);
	ft_memcpy(dst, s + start, size);
	dst[size] = '\0';
	return (dst);
}
// Marcelo Raineri Pires
//int	main(void)
//{ 
//	char *str = "lorem ipsum dolor sit amet";
//	printf("%s\n",ft_substr(str, 400, 20));
//}
