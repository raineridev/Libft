/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:25:33 by mraineri          #+#    #+#             */
/*   Updated: 2024/05/11 19:15:58 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char *str = ft_itoa(n);
	write(fd, str, ft_strlen(str));
	free(str);
}

//int	main(void)
//{
//	ft_putnbr_fd(-10000, 1);
//}