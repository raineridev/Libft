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

#include <stdio.h>
#include <stdlib.h>
int	ft_atoi(const char *nptr)
{
	int	i;
	int	signal;

	signal = 1;
	i = 0;
	while(nptr[i] == 32)
	{	
	i++;
	}
	if(nptr[i] == '+' || nptr[i] == '-')
	{
		signal = signal * nptr[i];
	}
	while(nptr[i] >= 49 && nptr[i] <= 57)
	{
			
	}
	return(0);
}

int	main(void)
{
	char str[] = "    -69adfasdfasd98";	
	printf("%d\n", atoi(str));
	return (0);
}
