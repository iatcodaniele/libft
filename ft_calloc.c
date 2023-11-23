/*The  calloc()  function allocates memory for an array of nmemb ele‐
       ments of size bytes each and returns a  pointer  to  the  allocated
       memory.   The  memory  is set to zero.  If nmemb or size is 0, then
       calloc() returns either NULL, or a unique pointer  value  that  can
       later  be  successfully passed to free().  If the multiplication of
       nmemb and size would result in integer overflow, then calloc()  re‐
       turns  an error.  By contrast, an integer overflow would not be de‐
       tected in the following call to malloc(), with the result  that  an
       incorrectly sized block of memory would be allocated:

           malloc(nmemb * size);*/

/*The  malloc()  and calloc() functions return a pointer to the allo‐
       cated memory, which is suitably aligned for any built-in type.   On
       error, these functions return NULL.  NULL may also be returned by a
       successful call to malloc() with a size of zero, or by a successful
       call to calloc() with nmemb or size equal to zero.

       The free() function returns no value.*/

 void ft_bzero(void *s, size_t n)
{
	unsigned char *p;
	size_t i = 0;
	p = s;
	while(i < n)
	{
		*p++ = 0;
		n--;
	}
}
 void *calloc(size_t number, size_t size)
 {
    void *array;

    array = malloc(number * size); //allocating memory to "number" elements of size "size"
    
    if(!array)
        return NULL;
    else
        ft_bzero(array, number * size) //initializing "number * size" bytes of array to zero
    
    return (array);
 }

 #include <stdio.h>

int	main()
{
	size_t count = 5;
	size_t size = 1;
	printf("%p\n", ft_calloc(5,1));
	return (0);
}