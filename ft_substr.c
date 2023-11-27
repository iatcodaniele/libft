/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:39:14 by diatco            #+#    #+#             */
/*   Updated: 2023/11/27 12:57:08 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	unsigned int i = 0;
	if(start >= ft_strlen(s))
	{
		start = ft_strlen(s);
		len = 0;
	}
	if(start + len > ft_strlen(s))
	{
		len = ft_strlen(s) - start;
	}
	sub = ft_calloc(len + 1, sizeof(char));
	if(!sub)
		return NULL;
	while( i < len && s[start + i])
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return sub;
}

int main()
{
	char x[] = "hello my name is jinx";
	int start = 6;
	size_t len = 20;

	printf("%s\n", ft_substr(x, start, len));
}
