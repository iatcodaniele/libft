#include "libft.h"

static int ft_is_space(char c)
{
    if((c >= 9 && c <= 13) || c == 32)
        return 1;
    return 0;
}

int ft_atoi(const char *str)
{
    int i = 0;
    int res = 0;
    int sign = 1;

    while(ft_is_space(str[i]) == 1)
    {
        i++;
    }
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            sign *= -1;
    }

    while(str[i])
    {
        if(str[i] >= 0 && str[i] <= 9)
        {
            res = res * 10;
            res = res + (str[i++] - 48);
        }
        else
            return (res * sign);
    }
    return (res * sign);
}
