/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:46:15 by diatco            #+#    #+#             */
/*   Updated: 2023/12/01 11:17:46 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printn(int n, int fd)
{
	n += 48;
	write(fd, &n, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n <= -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(-n, fd);
		return ;
	}
	if (n < 10)
	{
		ft_printn(n, fd);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_printn(n % 10, fd);
	}
}

// int main()
// {
// 	ft_putnbr_fd(INT_MIN, 1);
// }
