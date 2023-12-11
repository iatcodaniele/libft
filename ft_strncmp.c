/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:24:31 by diatco            #+#    #+#             */
/*   Updated: 2023/12/06 11:30:17 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s1cpy;
	unsigned char	*s2cpy;
	unsigned int	i;

	s1cpy = (unsigned char *)s1;
	s2cpy = (unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (s1cpy[i] && s2cpy[i]
		&& s1cpy[i] == s2cpy[i] && i < n)
		i++;
	if (i < n)
	{
		return (s1cpy[i] - s2cpy[i]);
	}
	else
		return (0);
}

// #include <string.h>
// int main()
// {
// 	const char s1[] = "abcd";
// 	const char s2[] = "abcc";

// 	printf("%d\n", ft_strncmp(s1, s2, 3));
// 	printf("%d\n", ft_strncmp(s1, s2, 5));
// 	printf("%d\n", strncmp(s1, s2, 3));
// 	printf("%d\n", strncmp(s1, s2, 5));
// }
