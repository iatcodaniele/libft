/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:22:09 by diatco            #+#    #+#             */
/*   Updated: 2023/12/01 15:58:13 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst)
	{
		new -> next = *lst; //place 'new' before the first node by giving it a pointer to first node
		*lst = new; //first node becomes 'new' node
	}
	else
		*lst = new; //if the list is empty, insert new as only node
}

// int main()
// {
// 	t_list *str0 = NULL;
// 	char str1[] = "how";
// 	char str2[] = "are you";
// 	t_list *new1 = ft_lstnew(str2);
// 	t_list *new2 = ft_lstnew(str1);
// 	ft_lstadd_front(&str0, new2);
// 	ft_lstadd_front(&str0, new1);
// 	printf("%s\n", (char *) str0 -> content);
// 	printf("%s\n", (char *)str0 -> next -> content);
// }
