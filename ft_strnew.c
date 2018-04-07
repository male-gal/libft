/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: male-gal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 22:39:54 by male-gal          #+#    #+#             */
/*   Updated: 2018/04/07 18:33:37 by male-gal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*out;
	size_t	i;

	i = 0;
	if ((out = (char *)ft_memalloc(size + 1)) == 0)
		return (NULL);
	while (i < size)
	{
		out[i] = '\0';
		i++;
	}
	return (out);
}
