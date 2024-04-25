/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:24:15 by mraineri          #+#    #+#             */
/*   Updated: 2024/04/24 19:36:42 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return (&((char *)haystack)[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

//int	main(void)
//{
//	char *str = "D tomate tomas arroz e carne";
//	char *needle = "tomas";
//	printf("1#'%s'\n", ft_strstr(str, needle));
//	printf("2#'%s'\n", strstr(str, needle));
//}
