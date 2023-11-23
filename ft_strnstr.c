#include <string.h>
#include <stdio.h>
/*The strnstr() function locates the first	occurrence of the  null-termi-
       nated  string little in the string big, where not more than len charac-
       ters are	searched.  Characters that appear after	a `\0'	character  are
       not  searched.*/

/*If little is an empty string, big is returned; if little	occurs nowhere
       in big, NULL is returned; otherwise a pointer to	the first character of
       the first occurrence of little is returned.*/


char *ft_strnstr(const char *big, const char *little, size_t len)
{
        size_t  j; //little
        size_t  i; //big

        i = 0;
        if (little[i] == 0)
                return ((char *)big); //if little is an empty string, big is returned 
        while (big[i] && i < len) //searches big until len bytes
        {
                j = 0;
                while (big[i + j] == little[j] && (i + j) < len) //compares characters from both big and little while iterating through them
                {
                        if (little[j + 1] == '\0') //if next byte is end of string little
                                return ((char *)big + i); //pointer to the first character of first occurence of little
                        j++; //if a match is found, it increments j to check if any further matches from little are present
                }
                i++; //i is incremented and therefore compared to j until either a match is found or it exits 
        }
        return (NULL); //if little exists but occurs nowhere in big, NULL is returned
}

int main()
{
    char *x = "hello jinx";
    char *y = "jinx";

    printf("%s\n", ft_strnstr(x, y, 10));
}