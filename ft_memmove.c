/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:32:26 by diatco            #+#    #+#             */
/*   Updated: 2023/11/20 11:32:29 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memmove(void *dest, const void *src, size_t n)
{
	char *d = (char *)dest;
	char *s = (char *)src;
	size_t i = 0;

	if(!dest && !src)
		return dest;
	if(d > s)
	{
		while(n--)
			d[n] = s[n];
	}
	else
	{
		while(i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return dest;
}

/*#include <stdio.h>
#include <string.h>
int main()
{
	char x[] = "abcdef";
	char y[] = "hello";
	ft_memmove(x, y, 6);
	printf("%s%p\n", x, ft_memmove(x, y, 6));
	printf("%s%p\n", x, memmove(x, y, 6));
}*/
