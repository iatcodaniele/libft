/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:14:04 by diatco            #+#    #+#             */
/*   Updated: 2023/12/04 10:34:46 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst)
	{
		if (lst -> next == NULL) //if pointer points to NULL(means its the last one)
			return (lst); //it returns current node
		lst = lst -> next; //moves forward
	}
	return (lst);
}

// int main()
// {
// 	t_list *a = (t_list *)malloc(sizeof(t_list));
// 	t_list *b = (t_list *)malloc(sizeof(t_list));
// 	t_list *c = (t_list *)malloc(sizeof(t_list));
// 	a -> content = "d";
// 	b -> content = "i";
// 	c -> content = "k";
// 	a -> next = b;
// 	b -> next = c;
// 	c -> next = NULL;

// 	printf("%s\n", (char*)ft_lstlast(a)-> content);
// 	return 0;
// }
