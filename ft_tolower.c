/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:47:04 by mraineri          #+#    #+#             */
/*   Updated: 2024/04/09 13:07:51 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_toupper(char *string)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
	{
		if (string[i] >= 65 && string[i] <= 90)
		{
			string[i] = string[i] + 32;
		}
		i++;
	}
	return (*string);
}

            
