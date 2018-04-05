/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: male-gal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 21:22:20 by male-gal          #+#    #+#             */
/*   Updated: 2018/04/05 21:24:15 by male-gal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*out;

	if ((out = malloc(sizeof(char) * (len + 1))) == 0)
		return NULL;
	while (start--)
		s++;
	ft_strncpy(out, s, len);
	out[len] = '\0';
	return (out);
}
