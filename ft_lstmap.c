/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:30:46 by diatco            #+#    #+#             */
/*   Updated: 2023/12/06 11:54:21 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_element;
	void	*f_result;

	new_list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		f_result = f(lst->content); //stores result of function-modified content
		new_element = ft_lstnew(f_result); //stores result variable inside new list
		if (!new_element) //if function fails to return modified node content
		{
			ft_lstclear(&new_list, del); //the list is deleted
			del(f_result); //the node is freed
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_element); //adds result to the back of new list
		lst = lst -> next;
	}
	return (new_list);
}

// void del(void *content)
// {
// 	free(content);
// 	content = NULL;
// }

// void *modify(void *value)
// {
// 	int *v = (int *)value;
// 	*v+=10;
// 	return value;
// }

// int main()
// {
// 	int x = 15;
// 	int y = 5;

// 	t_list *head = ft_lstnew(&x);
// 	t_list *node = ft_lstnew(&y);
// 	ft_lstadd_back(&head, node);
// 	ft_lstmap(head, modify, del);

// 	printf("%d\n", (int)head -> content);
// }
