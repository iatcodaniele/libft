/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:23:10 by diatco            #+#    #+#             */
/*   Updated: 2023/11/19 16:32:21 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i = 0;
    int res = 0;
    int sign = 1;

    char *str_c = (char *)str;

    while(((str_c[i] != '\0') && (str_c[i] >= 9 && str_c[i] <= 13)) || (str_c[i] == 32))
    {
        i++;
    }
    if(str_c[i] == '-' || str_c[i] == '+')
    {
        if(str_c[i++] == '-')
            sign *= -1;
    }
    while(str_c[i] && (str_c[i] >= '0' && str_c[i] <= '9'))
    {
        res = res * 10;
        res = res + (str_c[i++] - 48);
    }
    return (res * sign);
}

/*int main()
{
    printf("%d\n", ft_atoi("\t\v\f\r\n \f-06050"));
    printf("%d\n", atoi("\t\v\f\r\n \f-06050"));
}*/
