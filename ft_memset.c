/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:31:43 by diatco            #+#    #+#             */
/*   Updated: 2023/12/06 10:29:47 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i++] = (unsigned char )c;
	}
	return (s);
}

/*int main()
{
	char s[] = " itsa me, mario";
	int c = 'i';
	size_t n = 7;
	ft_memset(s, c, n);
	printf("%s\n", s);
}*/
// The  memset()  function fills the first n bytes of the memory area pointed
//        to by s with the constant byte c.
