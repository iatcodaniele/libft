/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:31:53 by diatco            #+#    #+#             */
/*   Updated: 2023/12/06 10:39:16 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = s;
	while (i < n)
	{
		*p++ = 0; /*sets byte to 0 and moves to next one*/
		n--; /*ensures that the loop will only run for n iterations*/
	}
}

// int main()
// {
// 	char s[] = "adorning";
// 	ft_bzero(s, 2);
// 	printf("%s\n", s);
// }
