/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:39:14 by diatco            #+#    #+#             */
/*   Updated: 2023/12/06 11:41:35 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	i = 0;
	if (start >= ft_strlen(s)) //no substring
	{
		start = ft_strlen(s); //creates empty string
		len = 0;
	}
	if (start + len > ft_strlen(s)) //substring extends beyond main string
	{
		len = ft_strlen(s) - start; //adjusting substring so that it ends at the end of s
	}					//maximum possible length of substring that doesn't extend beyond s
	sub = ft_calloc(len + 1, sizeof(char)); //allocating memory for all substring characters and setting memory area to 0
	if (!sub)
		return (NULL);
	while (i < len && s[start + i]) //s[start + i] ensures we don't copy past the original string, accessing each character from s from the start index
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0'; //redundant since calloc sets memory area to all zeroes
	return (sub);
}

// int main()
// {
// 	char x[] = "hello my name is jinx";
// 	int start = 6;
// 	size_t len = 20;

// 	printf("%s\n", ft_substr(x, start, len));
// }

// Allocates (with malloc(3)) and returns a substring
// from the string ’s’.
// The substring begins at index ’start’ and is of
// maximum size ’len’.
