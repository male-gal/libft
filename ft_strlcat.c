/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: male-gal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 18:19:12 by male-gal          #+#    #+#             */
/*   Updated: 2018/04/03 18:29:51 by male-gal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;

	if (size < ft_strlen(dst))
		dest_len = size;
	else
		dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dest_len == size)
		return (size + src_len);
	if (src_len < size - dest_len)
		ft_strncat(dst, src, src_len + 1);
	else
	{
		ft_strncat(dst, src, size - dest_len - 1);
		dst[size - 1] = '\0';
	}
	return (dest_len + src_len);
}
