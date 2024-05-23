/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:37:05 by mraineri          #+#    #+#             */
/*   Updated: 2024/05/21 15:27:05 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((unsigned char *)&ptr[i]); 
		i++;
	}
	return (NULL);
}

//int main () {
//	char s[] = {0, 1, 2 ,3 ,4 ,5};
//   const char ch = 'n';
//   char *ret;

//   ret = ft_memchr(str, ch, 2);

//   printf("String after |%c| is - |%s|\n", ch, ret);

//   return(0);
//}