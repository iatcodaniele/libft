/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:13:35 by diatco            #+#    #+#             */
/*   Updated: 2023/12/06 11:31:55 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	j;
	size_t	i;

	i = 0;
	if (little[i] == 0)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
//     char *x = "hello jinx";
//     char *y = "";

//     printf("%s\n", ft_strnstr(x, y, 10));
// }
// The strnstr() function locates the first occurrence
//      of the null-terminated string little in the string
//      big, where not more than len characters are searched.
// If little is an empty string, big is returned; if
//      little occurs nowhere in big, NULL is returned; oth‐
//      erwise a pointer to the first character of the first
//      occurrence of little is returned.
