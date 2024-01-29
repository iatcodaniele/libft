/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 09:32:58 by diatco            #+#    #+#             */
/*   Updated: 2023/11/27 09:33:01 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size) /* number of elements and the size of each element*/
{
	void	*array;

	array = malloc(number * size); /*total amount of memory to be allocated*/
	if (array == NULL)
		return (NULL);
	else
		ft_bzero(array, number * size); /*sets memory block 'array' of 'number*size' size to 0*/
	return (array);
}
/*int	main()
{
	size_t count = 5;
	size_t size = 1;
	printf("%p\n", ft_calloc(5,1));
	return (0);
}*/
