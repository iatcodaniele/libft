/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:31:09 by diatco            #+#    #+#             */
/*   Updated: 2023/12/04 10:45:10 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list) * 1); //allocating space for new list
	if (!new_node)
		return (NULL);
	new_node -> content = content; //assigning content to its variable
	new_node -> next = NULL; //assigning NULL to pointer
	return (new_node); //creates a list with one node
}

// int main()
// {
// 	char str[] = "hello";
// 	t_list *node = ft_lstnew(str);

// 	if(node != NULL)
// 		printf("%s\n", (char *)node -> content);
// 	free(node);
// }
