/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:19:21 by diatco            #+#    #+#             */
/*   Updated: 2023/12/06 10:41:08 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*s1;
	size_t	i;

	s1 = (char *)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)s1[i] == (unsigned char)c)
			return (&s1[i]);
		i++;
	}
	return (NULL);
}

// #include <string.h>
// int main()
// {
// 	printf("%p\n", ft_memchr("hello", 104, 0));
// 	printf("%p\n", memchr("hello", 104, 0));
// }

// The  memchr()  function  scans  
// the  initial n bytes of the memory area
// pointed to by s for the first instance of c.
