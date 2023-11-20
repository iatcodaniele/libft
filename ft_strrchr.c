/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:06:30 by diatco            #+#    #+#             */
/*   Updated: 2023/11/20 15:02:48 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i = ft_strlen(s);

	if(c == '\0')
	{
		return ((char *)&s[i]);
	}
	while(i >= 0)
	{
		if(s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return NULL;
}


/*#include <string.h>
int main()
{
	char x[] = "hello there";
	int y = 114;


	printf("%s%p\n", x, ft_strrchr(x, y));
	printf("%s%p\n", x, strrchr(x, y));
}*/
