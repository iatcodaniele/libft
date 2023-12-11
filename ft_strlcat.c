/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:24:07 by diatco            #+#    #+#             */
/*   Updated: 2023/12/06 11:21:46 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	destlen;
	unsigned int	srclen;
	unsigned int	i;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = 0;
	if (destlen < size)
	{
		srclen += destlen;
	}
	else
		srclen += size;
	while (src[i] != '\0' && (destlen + 1) < size)
	{
		dest[destlen++] = src[i++];
	}
	dest[destlen] = '\0';
	return (srclen);
}

// #include <string.h>
// int main()
// {
// 	char dest[] = "how long is this"; //17
// 	char src[] = "i am bigger than 7"; //19

// 	printf("%ld\n", ft_strlcat(dest, src, 17));
// 	printf("%s\n", strncat(dest, src, 17));
// }

//  It will append at most size - strlen(dst) - 1 bytes, NUL-terminating
//      the result.
