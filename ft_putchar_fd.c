/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 09:51:30 by diatco            #+#    #+#             */
/*   Updated: 2023/12/01 10:04:25 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main()
// {
// 	char c = 'a';
// 	ft_putchar_fd(c, STDOUT_FILENO);
// 	return 0;
// }

//A file descriptor is a number that represents an open file in a computer's operating system.
//In Unix-like operating systems, everything is treated as a file, and interactions with files are abstracted through file descriptors.
//File descriptors are used by programs to uniquely identify and refer to open files or input/output resources. 
//When you open a file or create a network connection, the operating system assigns a file descriptor to that resource.
//Programs use file descriptors to perform various operations on files, such as reading, writing, and seeking.
//File descriptors provide a standardized way for programs to interact with different types of resources 
//without needing to know the specifics of each.
