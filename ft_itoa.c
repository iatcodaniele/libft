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

static unsigned int	size(int nb) //helper function to determine size of string to be allocated
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		i++; //it increments i to account for the minus sign that will be part of the string
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
	number = malloc(sizeof(char) * (i + 1)); //allocating size of string + 1 for null character
	if (!number)
		return (NULL);
	if (nbr < 0)
	{
		number[0] = '-'; //places the minus sign in position 0
		n = -nbr; //stores the negative number inside n
	}
	else
		n = nbr;
	if (nbr == 0)
		number[0] = 48;
	number[i] = '\0';
	while (n != 0)
	{
		number[i - 1] = (n % 10) + 48; //modulo takes the last digit and stores it at i-1 position of the array
		n /= 10; //trashes the last digit
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
