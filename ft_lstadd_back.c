/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:25:11 by diatco            #+#    #+#             */
/*   Updated: 2023/12/04 13:57:01 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last -> next = new;
	}
}

// int main()
// {
// 	char a[] = "hello";
// 	char b[] = "there";
// 	t_list *node1 = ft_lstnew(a);
// 	t_list *node2 = ft_lstnew(b);
// 	t_list *head = NULL;
// 	ft_lstadd_back(&head, node1);
// 	ft_lstadd_back(&head, node2);

// 	printf("%s\n", (char *)head->content);
// 	printf("%s\n", (char *)head->next->content);
// 	return 0;
// }
