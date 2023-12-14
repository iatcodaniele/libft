/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:45:53 by diatco            #+#    #+#             */
/*   Updated: 2023/12/04 14:05:30 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*new;

	if (lst)
	{
		while (*lst)
		{
			new = (*lst)->next; //saves the next element in the list //this is so that we can move forward in the list
			ft_lstdelone(*lst, del); //deletes the current element //^if we were to delete immediately there wouldn't be a ref point
			*lst = new; //moves to the next element
		}
	}
	*lst = NULL;
}
// void del(void *content)
// {
// 	free(content);
// }

// int main()
// {
// 	t_list *i = (t_list *)malloc(sizeof(t_list));
// 	t_list *j = (t_list *)malloc(sizeof(t_list));
// 	t_list *k = (t_list *)malloc(sizeof(t_list));
// 	i->content = "1";
// 	j->content = "2";
// 	k->content = "3";
// 	i->next = j;
// 	j->next = k;
// 	k->next = NULL;
// 	ft_lstclear(&i, del);
// 	if (i == NULL)
// 		printf("list was cleared\n");
// 	else if(i!=NULL)
// 		printf("failure\n");
// 	return(0);
// }
