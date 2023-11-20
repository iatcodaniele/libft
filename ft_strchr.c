/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:06:45 by diatco            #+#    #+#             */
/*   Updated: 2023/11/20 16:34:29 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strchr(const char *s, int c)
{
	unsigned char a = c;
	char *str = (char *)s;
	size_t i = 0;

	// if(!str)
	// 	return NULL;
	if(a == '\0')
	{
		return(str + ft_strlen(str));
	}
	while(*str)
	{
		if(str[i] == a)
		{
			return (&str[i]);
		}
		str++;
	}
	return NULL;
}

/*#include <string.h>
int main()
{
	char x[] = "hello there";
	int y = '\0';


	printf("%s%p\n", x, ft_strchr(x, y));
	printf("%s%p\n", x, strchr(x, y));
}*/
