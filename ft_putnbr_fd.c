/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:46:15 by diatco            #+#    #+#             */
/*   Updated: 2023/12/06 10:35:03 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_nbr(int n, int fd)
{
	n += 48;
	write(fd, &n, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n <= -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ; //empty return used to exit the void function
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(-n, fd);
		return ;
	}
	if (n < 10)
	{
		ft_print_nbr(n, fd);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_print_nbr(n % 10, fd);
	}
}
// #include <limits.h>
// int main()
// {
// 	ft_putnbr_fd(INT_MIN, 1);
// }

// 0 = standard input
// 1 = standard output
// 2 = stadnard error
