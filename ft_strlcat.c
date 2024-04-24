/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:06:28 by mraineri          #+#    #+#             */
/*   Updated: 2024/04/24 11:42:41 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dst == NULL || src == NULL)
		return (0);
	while (dst[i] != '\0')
		i++;
	while (j <= size)
	{
		dst[i++] = src[j++];
	}
	dst[i] = '\0';
	return (i + j);
}

//int	main(void)
//{
//	char dest[] = "Hello";
//	char src[] = "World";

////	char *src = NULL;
//	printf("Strncat:%s\n", strncat(dest, src, 2));
////	printf("Return Size: %zu\n", ft_strlcat(dest, src, 2));
//	printf("Ft_Strnlcpy: %s\n", dest);
////	ft_strlcpy(dest, src, 2);
//}
