/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:58:23 by diatco            #+#    #+#             */
/*   Updated: 2023/11/27 15:36:12 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t i = 0;
	size_t end = ft_strlen(s1);
	char *trim;

	if(!s1 || !set)
		return NULL;
	while(i <= end && ft_strchr(set, (int) s1[i]))
		i++;
	while(i < end && ft_strchr(set, (int) s1[end]))
		end--;
	trim = malloc(sizeof(char) * (end - i + 2));
	if(!trim)
		return NULL;
	ft_strlcpy(trim, (char *)s1 + i, (end - i + 2));
	trim[end] = '\0';
	return trim;
}

/*int main()
{
	char x[] = "hello my name is jinx";
	char y[] = "h" "x";

	printf("%s\n", ft_strtrim(x, y));
}*/
