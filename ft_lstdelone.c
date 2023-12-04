/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:38:22 by diatco            #+#    #+#             */
/*   Updated: 2023/12/04 14:09:28 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
		del(lst -> content);
	free (lst);
}

// void del(void *content)
// {
// 	free(content);
// }

// int main()
// {
// 	t_list *c = NULL;
// 	char *str = ft_strdup("ciao");
// 	t_list *g = ft_lstnew(str);

// 	ft_lstadd_back(&c, g);
// 	ft_lstdelone(g, del);
// 	printf("%s\n", (char *)c->content);
// }
