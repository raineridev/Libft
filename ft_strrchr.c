/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:19:40 by mraineri          #+#    #+#             */
/*   Updated: 2024/04/20 16:52:40 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	
	i = ft_strlen((char *)s);
	if(s == NULL || c == NULL)
		return NULL;
	while (--i >= 0 && i != -1)
	{
		if(s[i] == c)
		{
			return (char *)&s[i];
		}
	}
	return NULL;
}

int	main(void)
{
	char test[] = "Hello World Wird";
	char *mytest = ft_strrchr(test, 87);
	printf("%s", mytest);	
}
