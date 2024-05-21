/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:50:22 by mraineri          #+#    #+#             */
/*   Updated: 2024/05/18 18:17:13 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//void del(void *content)
//{
//    free(content);
//}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *node = *lst;
	t_list *next_node = node->next;
	if(!lst || !*lst || !del)
		return ;
	while(next_node)
	{
		(*del)(node->content);
		free(node);
		node = next_node;
		next_node = node->next;
	}
	free(node);
	node = NULL;
}
//int	main(void)
//{
//	// Create Node's
//	t_list *node1 = ft_lstnew(strdup("Node 1"));
//	t_list *node2 = ft_lstnew(strdup("Node 2"));
//	t_list *node3 = ft_lstnew(strdup("Node 3"));
//	t_list *node4 = ft_lstnew(strdup("Node 4"));
//	t_list *node5 = ft_lstnew(strdup("Node 5"));
//	t_list *node6 = ft_lstnew(strdup("Node 6"));
//	// Link Node's
//	node1->next = node2;
//	node2->next = node3;
//	node3->next = node4;
//	node4->next = node5;
//	node5->next = node6;
//	// Make Action
//	printlsit(node1);
//	//printf("%s\n", (char *)node6->content);
//	ft_lstclear(&node1, &del);
//}
//int	main(void)
//{
//	t_list		*elem;
//	t_list		*elem2;
//	t_list		*elem3;
//	t_list		*elem4;
//	char		*str = strdup("lorem");
//	char		*str2 = strdup("ipsum");
//	char		*str3 = strdup("dolor");
//	char		*str4 = strdup("sit");

//	elem = ft_lstnew(str);
//	elem2 = ft_lstnew(str2);
//	elem3 = ft_lstnew(str3);
//	elem4 = ft_lstnew(str4);
//	elem->next = elem2;
//	elem2->next = elem3;
//	elem3->next = elem4;

//	ft_lstclear(&elem3, &del);
//	printf("Node 1: %s\nNode 2: %s\n\n", (char *)elem->content, (char *)elem2->content);
//}
