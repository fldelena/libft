/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fldelena <fldelena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 14:35:04 by fldelena          #+#    #+#             */
/*   Updated: 2020/11/11 22:26:59 by fldelena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (str1[i] == str2[i] && str1[i] != '\0')
			i++;
		else if (str1[i] == '\0' && str2[i] == '\0')
			return (0);
		else if (str1[i] == '\0' && str2[i] != '\0')
			return (-1);
		else if (str1[i] != '\0' && str2[i] == '\0')
			return (1);
		else
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	}
	return (0);
}
