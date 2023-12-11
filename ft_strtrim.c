/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:58:23 by diatco            #+#    #+#             */
/*   Updated: 2023/12/06 11:39:56 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	end;
	char	*trim;

	i = 0;
	end = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (i <= end && ft_strchr(set, (int) s1[i]))
		i++;
	while (i <= end && ft_strrchr(set, (int) s1[end]))
		end--;
	trim = malloc(sizeof(char) * (end - i + 2));
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, (char *)s1 + i, (end - i + 2));
	trim[end + 1] = '\0';
	return (trim);
}

// int main()
// {
// 	char x[] = "once upon a time";
// 	char y[] = "e" "o";

// 	printf("%s\n", ft_strtrim(x, y));
// }

// Allocates (with malloc(3)) and returns a copy of
// ’s1’ with the characters specified in ’set’ removed
// from the beginning and the end of the string.
