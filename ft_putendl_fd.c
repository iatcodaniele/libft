/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:38:29 by diatco            #+#    #+#             */
/*   Updated: 2023/12/01 10:45:12 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
// int main()
// {
// 	char s[] = "hello there";
// 	int fd;

// 	fd = open("output.txt", O_WRONLY | O_CREAT, 0644);
// 	if(fd == -1)
// 	{
// 		ft_putstr_fd("Failed to open file\n", -1);
// 		return 1;
// 	}

// 	ft_putendl_fd(s, fd);
// 	close(fd);
// 	return 0;
// }
