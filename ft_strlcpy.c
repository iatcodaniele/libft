/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:24:16 by diatco            #+#    #+#             */
/*   Updated: 2023/11/19 15:58:33 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i = 0;
    size_t res = 0;

    while(src[res])
        res++;
    if(!size)
        return res;
    while(src[i] != '\0' && i < size-1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return res;
}
