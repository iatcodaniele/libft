/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:06:45 by diatco            #+#    #+#             */
/*   Updated: 2023/12/06 10:42:58 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	a;
	char			*str;
	size_t			i;

	a = c;
	str = (char *)s;
	i = 0;
	if (a == '\0')
	{
		return (str + ft_strlen(str)); //if c is the null character, it return a pointer to the ending null character
	}
	while (*str)
	{
		if (str[i] == a)
		{
			return (&str[i]);
		}
		str++;
	}
	return (NULL);
}

/*#include <string.h>
int main()
{
	char x[] = "hello there";
	int y = '\0';


	printf("%s%p\n", x, ft_strchr(x, y));
	printf("%s%p\n", x, strchr(x, y));
}*/
// The  strchr()  function  returns  
// a pointer to the first occurrence of the
// character c in the string s.
