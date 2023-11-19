/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:24:07 by diatco            #+#    #+#             */
/*   Updated: 2023/11/19 16:10:52 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int ft_strlcat(char *dest, const char *src, unsigned int size)
{
    unsigned int destlen = ft_strlen(dest);
    unsigned int srclen = ft_strlen(src);
    unsigned int i = 0;

    if(destlen < size)
    {
        srclen+= destlen;
    }
	else
		srclen+= size;

    while(src[i] != '\0' && (destlen + 1) < size)
        {
            dest[destlen++] = src[i++];
        }
    dest[destlen] = '\0';
    return srclen;
}
