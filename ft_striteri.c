/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 09:25:50 by diatco            #+#    #+#             */
/*   Updated: 2023/12/01 10:04:29 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*void xtoupper(unsigned int i, char *s)
{
	if(i % 2 == 1)
	{
		*s = ft_toupper(*s);
	}
}

int main()
{
	char s[] = "hello";
	ft_striteri(s, xtoupper);

	printf("%s\n", s);
	return 0;
}*/