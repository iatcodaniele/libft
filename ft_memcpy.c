/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:32:14 by diatco            #+#    #+#             */
/*   Updated: 2023/11/20 11:45:11 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i = 0;
	char *d = (char *)dest;
	char *s = (char *)src;

	if(!dest && !src)
		return (NULL);
	while(i < n)
	{
		d[i] = s[i];
		i++;
	}
	return dest;
}

/*int main()
{
	char x[22];
	char y[] = "test basic du memcpy !";
	ft_memcpy(x, y, 22);

	printf("%s%p\n", x, ft_memcpy(x, y ,22));
	printf("%s%p\n", x, memcpy(x, y ,22));
}*/
