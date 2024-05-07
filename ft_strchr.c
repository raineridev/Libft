/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:35:39 by mraineri          #+#    #+#             */
/*   Updated: 2024/05/07 10:28:24 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
			return ((char *)&s[i]);
	return (NULL);
}
/*
int	main(void)
{
	char s[] = "tripouille";
	char *bds = strchr(s, 0);
	char *mytest = ft_strchr(s, 0);
	printf("%s\n", bds);
	printf(":%s\n", mytest);	
}
*/
