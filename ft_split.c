/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhindou <ykhindou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:22:07 by ykhindou          #+#    #+#             */
/*   Updated: 2024/10/31 09:17:05 by ykhindou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_delimiter(char delimiter, char c)
{
	return (delimiter == c);
}

int	count_words(const char *s, char c)
{
	int	i;
	int	total_words;

	if (!s)
		return (-1);
	i = 0;
	total_words = 0;
	while (s[i])
	{
		while (s[i] && is_delimiter(c, s[i]))
			i++;
		if (s[i] && !is_delimiter(c, s[i]))
			total_words++;
		while (s[i] && !is_delimiter(c, s[i]))
			i++;
	}
	return (total_words);
}

char	*new_word(const char *s, int *index, char c)
{
	int		len;
	char	*word;

	len = 0;
	while (s[*index] && !is_delimiter(c, s[*index]))
	{
		(*index)++;
		len++;
	}
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	if (len > 0)
		ft_strlcpy(word, s + *index - len, len + 1);
	else
		word[0] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		i;
	int		j;
	int		count;

	count = count_words(s, c);
	strings = (char **)malloc((count + 1) * sizeof(char *));
	if (!strings)
		return (NULL);
	i = 0;
	j = 0;
	while (j < count)
	{
		while (s[i] && is_delimiter(c, s[i]))
			i++;
		if (s[i] && !is_delimiter(c, s[i]))
			strings[j++] = new_word(s, &i, c);
		while (s[i] && !is_delimiter(c, s[i]))
			i++;
	}
	strings[j] = NULL;
	return (strings);
}
