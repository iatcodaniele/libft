/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:18:05 by diatco            #+#    #+#             */
/*   Updated: 2023/12/06 10:24:32 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void*))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst -> content);
			lst = lst->next;
		}
	}
}

// void modify(void *value)
// {
// 	int *v = (int *)value;
// 	*v+=10;
// }

// int main()
// {
// 	int x = 15;
// 	int y = 5;

// 	t_list *head = ft_lstnew(&x);
// 	t_list *node = ft_lstnew(&y);
// 	ft_lstadd_back(&head, node);
// 	ft_lstiter(head, modify);

// 	printf("%d\n", x);
// }
