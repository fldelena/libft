/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fldelena <fldelena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 13:58:55 by fldelena          #+#    #+#             */
/*   Updated: 2020/11/12 16:00:22 by fldelena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**clean(char **tab)
{
	size_t i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static size_t	words_count(char const *s, char c)
{
	char	*str;
	size_t	count;

	str = (char *)s;
	count = 0;
	while (*str)
	{
		if (*str == c)
		{
			str++;
			continue;
		}
		if (*str != c)
		{
			while (*str != c && *str)
				str++;
			count++;
		}
	}
	return (count);
}

static size_t	word_len(char const *s, char c)
{
	size_t	count;
	char	*str;

	str = (char *)s;
	count = 0;
	while (*str != c && *str)
	{
		count++;
		str++;
	}
	return (count);
}

static char		*trim_str(char *s, char c)
{
	char *str;

	str = s;
	while (*str == c && *str)
		str++;
	return (str);
}

char			**ft_split(char const *s, char c)
{
	char	**arr;
	char	*str;
	size_t	words;
	size_t	j;
	size_t	i;

	i = -1;
	if (!s)
		return (NULL);
	str = (char *)s;
	words = words_count(str, c);
	if (!(arr = malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	while (++i < words)
	{
		str = trim_str(str, c);
		if (!(arr[i] = malloc(sizeof(char) * (word_len(str, c) + 1))))
			clean(arr);
		j = 0;
		while (*str != c && *str != '\0')
			arr[i][j++] = *str++;
		arr[i][j] = '\0';
	}
	arr[i] = NULL;
	return (arr);
}
