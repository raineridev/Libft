/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 20:14:45 by mraineri          #+#    #+#             */
/*   Updated: 2024/05/05 20:49:13 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
	 	return ;
	new->next = *lst;
	*lst = new;
}

int	main(void)
{
	t_list *head;
	
	head = NULL;
	ft_lstadd_front(&head, ft_lstnew("sddf"));
	return (0);
}