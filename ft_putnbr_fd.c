/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:25:33 by mraineri          #+#    #+#             */
/*   Updated: 2024/05/05 17:38:23 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if(ft_itoa(n))
	write(fd, ft_itoa(n), ft_strlen(ft_itoa(n)));
}

//int	main(void)
//{
//	ft_putnbr_fd(434, 1);
//}