/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 09:27:32 by diatco            #+#    #+#             */
/*   Updated: 2023/12/04 10:51:32 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst ->next;
		i++;
	}
	return (i);
}

// int main()
// {
// 	t_list *a = (t_list *)malloc(sizeof(t_list));
// 	a -> content = NULL;
// 	// t_list *b = (t_list *)malloc(sizeof(t_list));
// 	// t_list *c = (t_list *)malloc(sizeof(t_list));
// 	// a -> content = "";
// 	// b -> content = "";
// 	// c -> content = "";
// 	// a -> next = b;
// 	// b -> next = c;
// 	// a -> content = NULL;

// 	if(ft_lstsize(a) != 0)
// 		printf("%d\n", ft_lstsize(a));
// 	else
// 		printf("Empty list.");
// 	return 0;
// }
