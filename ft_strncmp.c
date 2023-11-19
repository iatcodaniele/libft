/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:24:31 by diatco            #+#    #+#             */
/*   Updated: 2023/11/19 16:07:14 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned char *s1cpy;
	unsigned char *s2cpy;

	s1cpy = (unsigned char *)s1;
	s2cpy = (unsigned char *)s2;

	if(!n)
		return 0;
	unsigned int i = 0;
	while(s1cpy[i] && s2cpy[i] && s1cpy[i] == s2cpy[i] && i < n)
		i++;
	if(i < n)
	{
		return (s1cpy[i] - s2cpy[i]);
	}
	else
		return 0;
}
