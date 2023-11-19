#include "libft.h"

unsigned ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i = 0;

    if(!size)
    {
        return ft_strlen(src); //if size is 0, it return the lenght of src string
    }
    while(src[i] != '\0' && --size)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return i;
}
