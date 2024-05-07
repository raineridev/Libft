/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:06:28 by mraineri          #+#    #+#             */
/*   Updated: 2024/05/07 16:02:35 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = (ft_strlen(dst) + 1); // 6
	if((ft_strlen(dst) - size) == 0 || size == 0)
		return ft_strlen(dst) + ft_strlen(src);
	while((i) < size - 1&& src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}  



//int	main(void)
//{
//	char dest[30] = "Hello";
//	char *src = (char *)"World";

////	char *src = NULL;
//	printf("Strncat:%zu\n", ft_strlcat(dest, src, 7));
//	printf("Ft_Strnlcpy: %s\n", dest);
////	ft_strlcpy(dest, src, 2);
//}
