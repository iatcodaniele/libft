/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:19:21 by diatco            #+#    #+#             */
/*   Updated: 2023/11/20 14:04:09 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	char *s1 = (char *)s;
	size_t i = 0;
	while(i < n)
	{
		if((unsigned char)s1[i] == (unsigned char)c)
			return (&s1[i]);
		i++;
	}
	return NULL;
}

/*#include <string.h>
int main()
{
	printf("%p\n", ft_memchr("hello", 104, 4));
	printf("%p\n", memchr("hello", 104, 4));
}*/
