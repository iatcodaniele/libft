/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:39:31 by diatco            #+#    #+#             */
/*   Updated: 2023/12/06 10:49:55 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*c;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	c = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!c)
		return (NULL);
	while (s1[i] != '\0') //copies the first string to buffer
	{
		c[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		c[i + j] = s2[j]; //copies 2nd string to buffer after 1st string
		j++;
	}
	c[i + j] = '\0'; //placing the null terminator at the end of concatenated string: i + j is total length of concatenated string
	return (c);
}

// int main()
// {
// 	char x[] = "hello ";
// 	char y[] = "you";

// 	printf("%s\n", ft_strjoin(x, y));
// }
// Allocates (with malloc(3)) and returns a new
// string, which is the result of the concatenation
// of ’s1’ and ’s2’.
