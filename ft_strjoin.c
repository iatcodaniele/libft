/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:39:31 by diatco            #+#    #+#             */
/*   Updated: 2023/11/27 13:57:11 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *c;
	unsigned int i = 0;
	unsigned int j = 0;

	c = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if(!c)
		return NULL;
	while(s1[i] != '\0')
	{
		c[i] = s1[i];
		i++;

	}
	while(s2[j] != '\0')
	{
		c[i + j] = s2[j];
		j++;
	}
	c[i + j] = '\0';
	return c;
}

/*int main()
{
	char x[] = "hello";
	char y[] = "you";

	printf("%s\n", ft_strjoin(x, y));
}*/
