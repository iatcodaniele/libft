/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:17:29 by diatco            #+#    #+#             */
/*   Updated: 2023/11/29 14:33:28 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	size(int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		i++;
	while (nb != 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	unsigned int		i;
	char				*number;
	unsigned int		n;

	i = size(nbr);
	number = malloc(sizeof(char) * (i + 1));
	if (!number)
		return (NULL);
	if (nbr < 0)
	{
		number[0] = '-';
		n = -nbr;
	}
	else
		n = nbr;
	if (nbr == 0)
		number[0] = 48;
	number[i] = '\0';
	while (n != 0)
	{
		number[i - 1] = (n % 10) + 48;
		n /= 10;
		i--;
	}
	return (number);
}
/*int main()
{
	int x = INT_MIN;

	printf("%s\n", ft_itoa(x));
	return 0;
}*/
