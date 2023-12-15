/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:06:30 by diatco            #+#    #+#             */
/*   Updated: 2023/12/06 11:37:28 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == '\0')
	{
		return ((char *)&s[i]); //returns pointer to end of string(i is lenght of str)
	}
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i--; //iterates backwards to look for c
	}
	return (NULL);
}
// #include <string.h>
// int main()
// {
// 	char x[] = "hello there";
// 	int y = 'r';
// 	printf("%s %p %s\n", x, ft_strrchr(x, y), ft_strrchr(x, y));
// 	printf("%s %p %s\n", x, strrchr(x, y), ft_strrchr(x, y));
// }
// The strrchr() function returns  a  pointer  to  the
//        last occurrence of the character c in the string s.
