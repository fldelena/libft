/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fldelena <fldelena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 21:29:33 by fldelena          #+#    #+#             */
/*   Updated: 2020/11/12 14:05:05 by fldelena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	indx_srch(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char				*ft_strtrim(char const *s1, char const *set)
{
	int				i;
	unsigned int	size_str;
	char			*start_str;
	char			*end_str;
	char			*outstr;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && indx_srch(s1[i], set))
		i++;
	start_str = (char *)&s1[i];
	if ((i = ft_strlen(s1) - 1) != -1)
		while (i >= 0 && indx_srch(s1[i], set))
			i--;
	end_str = (char *)&s1[i];
	if (!*s1 || end_str == start_str)
		size_str = 2;
	else
		size_str = end_str - start_str + 2;
	if (!(outstr = malloc(sizeof(char) * size_str)))
		return (NULL);
	ft_strlcpy(outstr, start_str, size_str);
	return (outstr);
}
