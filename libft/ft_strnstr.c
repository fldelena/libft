/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 13:22:56 by fldelena          #+#    #+#             */
/*   Updated: 2020/11/21 02:49:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t size)
{
	size_t	count;
	size_t	i;
	size_t	k;

	count = -1;
	if (!*str2)
		return ((char *)str1);
	while (++count < size && *(str1 + count))
	{
		i = 0;
		if (*(str1 + count + i) == *(str2 + i))
		{
			k = 0;
			while(count + i < size + 1 && *(str1 + count + i) && *(str2 + i))
			{
				if (*(str1 + count + i) != *(str2 + i))
					break;
				i++;
				k++;
			}
			if (k == ft_strlen(str2))
				return ((char *)str1 + count);
		}
	}
	return (NULL);
}
