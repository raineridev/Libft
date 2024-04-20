/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:19:40 by mraineri          #+#    #+#             */
/*   Updated: 2024/04/20 16:15:46 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	
	i = ft_strlen(s);
	while (s[i] != '\0')
	{
		printf("%c",s[i]);
		if(s[i] == c)
		{
			printf("Value of i: %zu, %c\n", i, s[i]);
			return (char *)&s[i];
		}
		i--;
	}
	return NULL;
}

int	main(void)
{
	char test[] = "Hello World Wird";
	char *mytest = ft_strrchr(test, 87);
	printf("%s", mytest);	
}
