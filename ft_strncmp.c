/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:03:09 by mraineri          #+#    #+#             */
/*   Updated: 2024/04/24 11:39:27 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i++ <= n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

// int main(void)
// {
//     char str1[] = "MArcelo"; 
//     char str2[] = "Marcelo";
//     printf("Strncmp original: %d\n", strncmp(str1, str2, 5));
//     printf("My Ft_Strncmp: %d", ft_strncmp(str1, str2, 5));
// }
