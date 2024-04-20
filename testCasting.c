/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testCasting.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:31:18 by mraineri          #+#    #+#             */
/*   Updated: 2024/04/14 18:16:34 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 10;
	void *b;
	
	b = malloc(a * sizeof(int));
	printf("%d\n", *((int *)b) = a); 
	int c = 65;

	int *ptr = &c;
	printf("%c\n", *(char *)ptr);
	//printf("%d\n" (int)b);
	return (0);
}
