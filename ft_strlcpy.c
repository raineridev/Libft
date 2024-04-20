/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:00:34 by mraineri          #+#    #+#             */
/*   Updated: 2024/04/18 12:06:41 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i <= size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}


int	main(void)
{
	char dst[] = "Heapjkdfgsdjgs";
	char src[] = "Downed"; // 0-D | 1-O | 2-W | 3-N | 4-E | 5-D | 6-\0 |	
	printf("Return: %zu\n",ft_strlcpy(dst, src, 5));
	//dst[6] = '\0';
	printf("%s", dst);
}
