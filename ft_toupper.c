/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:47:04 by mraineri          #+#    #+#             */
/*   Updated: 2024/04/09 12:59:51 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_toupper(char *string)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
	{
		if (string[i] >= 97 && string[i] <= 122)
		{
			string[i] = string[i] - 32;
		}
		i++;
	}
	return (*string);
}
