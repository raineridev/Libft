/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:35:39 by mraineri          #+#    #+#             */
/*   Updated: 2024/04/18 14:18:33 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char test[] = "Hello World";
	char *bds = strchr(test, 87);
	char *mytest = ft_strchr(test, 87);
	char arr[] = "Marcelo";
	printf("%s\t", &arr[1]);
	printf("%s", mytest);	
}
*/
