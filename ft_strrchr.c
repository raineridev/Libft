/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:19:40 by mraineri          #+#    #+#             */
/*   Updated: 2024/04/20 17:34:40 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	
	i = ft_strlen((char *)s);
	if(!s| !c || i == 0)
		return NULL;
	while (--i >= 0)
	{
		if(s[i] == c)
		{
			return (char *)&s[i];
		}
	}
	return NULL;
}