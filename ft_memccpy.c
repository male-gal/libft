/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: male-gal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 16:16:37 by male-gal          #+#    #+#             */
/*   Updated: 2018/04/04 17:40:41 by male-gal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{

		((char*)dest)[i] = ((char*)src)[i];
		if (((char *)dest)[i] == (unsigned char)c)
			return (dest + ++i);
		i++;
	}
	return (NULL);
}
