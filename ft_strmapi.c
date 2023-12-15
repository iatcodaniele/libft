/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 08:43:17 by diatco            #+#    #+#             */
/*   Updated: 2023/12/06 11:28:10 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*m;

	i = 0;
	m = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!m)
		return (NULL);
	while (s[i])
	{
		m[i] = f(i, s[i]); //stores results of function inside allocated memory area
		i++;
	}
	m[i] = '\0';
	return (m);
}

// char xtoupper(unsigned int i, char c)
// {
// 	if(i % 2 == 1)
// 		return ft_toupper(c);
// 	return (c);
// }

// int main()
// {
// 		char const s[] = "hello";
// 		char *str = ft_strmapi(s, xtoupper);
// 		unsigned int i = 0;
// 		while(str[i])
// 		{
// 			write(1, &str[i], 1);
// 			i++;

// 		}
// 		free(str);
// 		return 0;
// }

// Applies the function ’f’ to each character of the
// string ’s’, and passing its index as first argument
// to create a new string (with malloc(3)) resulting
// from successive applications of ’f’.
