/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 19:49:09 by fldelena          #+#    #+#             */
/*   Updated: 2020/11/21 02:19:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *i;
	unsigned char j;

	i = (unsigned char *)s;
	j = (unsigned char)c;
	while (n--)
	{
		if (*i == j)
			return (i);
		i++;
	}
	return (NULL);
}
