/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:55:25 by mraineri          #+#    #+#             */
/*   Updated: 2024/04/20 18:11:51 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    int i;
    
    i = 0;
	if(!s1 || !s2)
		return (0);
    while(i++ <= n)
    {
        if(((char *)s1)[i] != ((char *)s2)[i])
            return (((char *)s1)[i] - ((char *)s2)[i]);
    }
    return  (0);
}
/*
int main(void)
{
    char *str1 = NULL;
	char *str2 = "MArcelo";
	printf("%d", ft_memcmp(str1, str2, 5));
    return (0);
}
*/