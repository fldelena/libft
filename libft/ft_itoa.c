/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fldelena <fldelena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 13:12:33 by fldelena          #+#    #+#             */
/*   Updated: 2020/11/12 13:14:34 by fldelena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static unsigned int	nb_len(long n)
{
	unsigned int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char				*ft_itoa(int n)
{
	long			nb;
	unsigned int	len;
	char			*str_nb;

	nb = n;
	len = nb_len(nb);
	if (!(str_nb = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	str_nb[len] = '\0';
	if (nb < 0)
	{
		str_nb[0] = '-';
		nb *= -1;
	}
	str_nb[--len] = nb % 10 + '0';
	nb /= 10;
	while (nb > 0)
	{
		str_nb[--len] = nb % 10 + '0';
		nb /= 10;
	}
	return (str_nb);
}
