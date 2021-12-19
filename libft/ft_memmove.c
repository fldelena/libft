/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fldelena <fldelena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 17:26:15 by fldelena          #+#    #+#             */
/*   Updated: 2020/11/11 22:21:28 by fldelena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *source, size_t n)
{
	char	*s;
	char	*d;
	size_t	i;

	i = 0;
	s = (char *)source;
	d = (char *)dest;
	if (d > s)
	{
		while (n--)
			d[n] = s[n];
		return (dest);
	}
	else
		ft_memcpy(dest, source, n);
	return (dest);
}
