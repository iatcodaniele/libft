/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:31:53 by diatco            #+#    #+#             */
/*   Updated: 2023/11/20 11:31:55 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_bzero(void *s, size_t n)
{
	unsigned char *p;
	size_t i = 0;
	p = s;
	while(i < n)
	{
		*p++ = 0;
		n--;
	}
}

/*#include <stdio.h>

int main()
{
	size_t n = 0; //after first byte being set to 0, effectively making it an empty string
	char s[] = "why";
	ft_bzero(s, n);
	printf("%s\n",s);
}*/
