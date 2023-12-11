/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatco <diatco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:44:04 by diatco            #+#    #+#             */
/*   Updated: 2023/12/06 12:29:13 by diatco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(const char *str, char c)
{
	int		i;
	int		word;
	size_t	counter;

	i = 0;
	word = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		if (!word && str[i] != c)
		{
			word = 1;
			counter++;
		}
		else if (word && str[i] == c)
			word = 0;
		i++;
	}
	return (counter);
}

static char	*word_dup(const char *str, int start, int end)
{
	int			i;
	char		*word;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

static void	ft_free(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

int	check_malloc(char **array, int j, int *index)
{
	*index = -1;
	if (!array[j - 1])
	{
		ft_free(array);
		return (0);
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;
	size_t	j;
	int		index;

	array = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	i = -1;
	j = 0;
	index = -1;
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			array[j++] = word_dup(s, index, i);
			if (!check_malloc(array, j, &index))
				return (NULL);
		}
	}
	array[j] = NULL;
	return (array);
}

//  int main()
//  {
//  		char *s = "hello all    guys";
//          int i = 0;
//          char **result = ft_split(s, ' ');

//          while (result[i])
//          {
//  			printf("%s\n", result[i]);
//  			i++;
//  		}
//  		ft_free (result);
// }
