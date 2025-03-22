/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitafern <aitafern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 12:35:56 by aitafern          #+#    #+#             */
/*   Updated: 2025/02/07 16:09:48 by aitafern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**get_array_words(char const *str, char sep, int *word_count)
{
	int		in_word;
	int		i;
	char	**array_words;

	in_word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != sep && in_word == 0)
		{
			in_word = 1;
			(*word_count)++;
		}
		if (str[i] == sep && in_word == 1)
			in_word = 0;
		i++;
	}
	array_words = ft_calloc((*word_count) + 1, sizeof(char *));
	return (array_words);
}

static char	*get_next_word(char const *str, char sep, int *i_end)
{
	int	i;
	int	in_word;
	int	start;

	in_word = 0;
	i = (*i_end) - 1;
	while (str[++i] != '\0')
	{
		if (str[i] != sep && in_word == 0)
		{
			in_word = 1;
			start = i;
			continue ;
		}
		if (str[i] == sep && in_word == 1)
		{
			*i_end = i;
			return (ft_substr(str, start, (size_t)(i - start)));
		}
	}
	if (in_word)
		return (ft_substr(str, start, (size_t)(i - start)));
	return (NULL);
}

static char	**cleanup(char **array_words, int word_count)
{
	while (word_count >= 0)
	{
		free(array_words[word_count]);
		word_count--;
	}
	free(array_words);
	return (NULL);
}

char	**ft_split(char const *s, char sep)
{
	int		word_count;
	char	**array_words;
	int		i;
	int		i_end;

	word_count = 0;
	i_end = 0;
	array_words = get_array_words(s, sep, &word_count);
	if (array_words == NULL)
		return (NULL);
	i = -1;
	while (++i < word_count)
	{
		array_words[i] = get_next_word(s, sep, &i_end);
		if (array_words[i] == NULL)
			return (cleanup(array_words, word_count));
	}
	return (array_words);
}
