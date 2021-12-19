/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fldelena <fldelena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 20:00:55 by fldelena          #+#    #+#             */
/*   Updated: 2020/11/11 22:27:37 by fldelena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	size_t i;

	i = ft_strlen(str);
	if (ch == '\0')
		return ((char *)str + i);
	while (i--)
		if (str[i] == ch)
			return ((char *)str + i);
	return (NULL);
}
