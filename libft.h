#ifndef  libft_h
#define libft_h

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

int ft_atoi(const char *str);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_strlen(const char *str);
int ft_strncmp(const char *s1, const char *s2, unsigned int n);
int ft_toupper(int c);
int ft_tolower(int c);
unsigned int ft_strlcpy(char *dest, const char *src, size_t size);
unsigned int ft_strlcat(char *dest, const char *src, unsigned int size);
char *ft_strdup(const char *str);

#endif
