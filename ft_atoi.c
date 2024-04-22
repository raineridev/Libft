/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c	                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 13:51:19 by mraineri          #+#    #+#             */
/*   Updated: 2024/04/12 13:51:20 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
	int	i;
	int	num;
	int	signal;

	i = 0;
	num = 0;
	while(nptr[i] == 32)
		i++;
	signal = (nptr[i] != '-') - (nptr[i] == '-');
	i += (nptr[i] == '-' || nptr[i] == '+');
	while(nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = num * 10 + (nptr[i] - '0');
		i++;
	}
	return (num * signal);
}

int	main(void)
{
	char str[] = "    69adfasdfasd98";	
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
	return (0);
}
