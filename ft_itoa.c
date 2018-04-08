/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: male-gal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 22:26:10 by male-gal          #+#    #+#             */
/*   Updated: 2018/04/07 18:59:36 by male-gal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(int n)
{
	int i;

	i = 0;
	if (n < 0)
		n *= -1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int num)
{
	char		*out;
	int			i;
	int			len;
	long int	n;

	n = num;
	len = get_len(n);
	i = 0;
	if (n < 0 || len == 0)
		len++;
	if (!(out = ft_strnew(len)))
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		*out = '-';
		i++;
	}
	while (len > i)
	{
		len--;
		out[len] = (n % 10) + '0';
		n /= 10;
	}
	return (out);
}
