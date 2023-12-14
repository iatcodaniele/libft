/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:32:26 by diatco            #+#    #+#             */
/*   Updated: 2023/12/06 10:29:31 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	char		*s;
	size_t		i;

	d = (char *)dest;
	s = (char *)src;
	i = 0;
	if (!dest && !src)
		return (dest);
	if (d > s)
	{
		while (n--) //if dest buffer is larger than src string
			d[n] = s[n]; //copies the chars from src string backwards into the buffer
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char x[] = "abcdef";
// 	char y[] = "hello";
// 	ft_memmove(x, y, 2);
// 	printf("%s%p\n", x, ft_memmove(x, y, 2));
// 	printf("%s%p\n", x, memmove(x, y, 2));
// }
// The  memmove() function copies 
// n bytes from memory area src to memory area dest.  
