#include <stddef.h>
#include <stdio.h>
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *str1 = (char *)s1;
    unsigned char *str2 = (char *)s2;
    size_t i = 0;

    if(n == 0)
        return 0;

    while(str1[i] && str2[i] && i < n)
    {
        str1[i++];
        str2[i++];
    }
    return (str1[i] - str2[i]);
}

int main()
{
    char *s1 = "abc";
    char *s2 = "abd";

    printf("%d\n", ft_memcmp(s1, s2, 2)); //-1;
    printf("%p\n%p\n", s1, s2);
}