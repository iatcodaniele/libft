#include "libft.h"

unsigned int ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t destlen = ft_strlen(dest);
    size_t totlen = 0;

    totlen = destlen + ft_strlen(src);
    if(destlen < size - 1)
    {
        size_t i = 0;
        while(dest[destlen] != '\0' && destlen < size - destlen - 1)
        {
            dest[destlen++] = src[i++];
        }
    }
	else
		return (size + ft_strlen(src));
    dest[destlen] = '\0';
    return totlen;
}
