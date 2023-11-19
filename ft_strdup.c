/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:24:00 by diatco            #+#    #+#             */
/*   Updated: 2023/11/19 15:24:02 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *str)
{
    int i = 0;
    char *dup;

    dup = (char*)malloc(sizeof(char) * ft_strlen(str) + 1);
    if(!dup)
        return NULL;

    while(str[i])
    {
        dup[i] = str[i];
        i++;
    }
    dup[i] = '\0';
    return dup;
}
