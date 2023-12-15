/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:01:13 by diatco            #+#    #+#             */
/*   Updated: 2023/12/01 10:04:19 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

void ft_putstr_fd(char *s, int fd)
{
	int i = 0;
	while(s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

// int main()
// {
// 	char s[] = "hello";
// 	int fd;

// 	fd = open("outputstr.txt", O_WRONLY | O_CREAT, 0644);

// 	if(fd == -1)
// 	{
// 		ft_putstr_fd("Failed to open file\n", STDERR_FILENO);
// 		return 1;
// 	}

// 	ft_putstr_fd(s, fd);
// 	close(fd);
// 	return 0;
// } 

//writes directly to file descriptor
//0_WRONLY - open for writing only
//O_CREAT - create file if it doesn't exist
//0644 - permissions to use - owner can read and write, other can read
