/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 21:56:40 by mraineri          #+#    #+#             */
/*   Updated: 2024/05/18 19:57:04 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	count_worlds(char const *s, char c, char **list)
{
	int	i;
	int count;
	
	count = 0;
	while (s && *s)
	{
		i = 0;
		while(*s && *s == c)
			s++;
		while(s[i] && s[i] != c)
			i++;
		if (i)
		{	
			if (list)
			{
				list[count] = ft_substr(s, 0, i);
				if (!list[count])
					return (-1);
			}
			count++;
		}
		s += i;
	}
	return (count);
}

void	ft_free_split(char **split)
{
	int i = 0;

	if (!split)
		return ;
	while (split[i])
		free(split[i++]);
	free(split);
}

char    **ft_split(char const *s, char c)
{
	int size = count_worlds(s, c, NULL);
	char **list = ft_calloc((size + 1), sizeof(char *));
	if (!list)
		return (NULL);
    if (count_worlds(s, c, list) == -1)
	{
		ft_free_split(list);
		return (NULL);
	}
	return list;
}

//int main(void)
//{
//	const char *s = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
//	char** list = ft_split(s, ' ');
//	for (int i = 0; list[i]; i++)
//	{
//		printf("[%d] %p ->\n", i, list[i]);
//		printf("	[%d] %s\n", i, list[i]);
//	}
//	ft_free_split(list);
//}