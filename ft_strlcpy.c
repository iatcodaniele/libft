/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:24:16 by diatco            #+#    #+#             */
/*   Updated: 2023/12/06 11:26:29 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	res;

	i = 0;
	res = 0;
	while (src[res] != '\0')
	{
		res++; //determines total length of src
	}
	if (size == 0)
	{
		return (res);
	}
	while (src[i] != '\0' && i < size - 1) // size - 1 to leave space for null terminator
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (res);
}

// int main()
// {
// 	char dest[100];
// 	char src[] = "hello i am a string";

// 	printf("%ld\n", ft_strlcpy(dest, src, 0));
// 	printf("%s\n", dest);
// }

// The strlcpy() function copies up to size - 1 characters from the NUL-ter‐
//      minated string src to dst, NUL-terminating the result.
