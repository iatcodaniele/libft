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

	destlen = ft_strlen(dest); //storing length of strings in local variables
	srclen = ft_strlen(src);
	i = 0;
	if (destlen < size)
	{
		srclen += destlen; //if length of dest buffer is bigger than size, sum up length of both buffers(man instructions)
	}
	else
		srclen += size; // if length of dest buffer is equal or smaller than size, sum up size and src length(to get size of desired destination buffer)
	while (src[i] != '\0' && (destlen + 1) < size) //checks if there is at least one more space left in the destination buffer for the null terminator after the current character from `src` is copied.
	{						//to leave space for the null terminator; if there isn't the loop stops and adds null terminator
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
