/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: male-gal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:00:58 by male-gal          #+#    #+#             */
/*   Updated: 2018/04/03 14:52:24 by male-gal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int l;
	int i;
	char *out;

	l = ft_strlen(s);
	i = 0;
	out = (char *)malloc(sizeof(char) * l + 1);
	while (s[i])
	{
		out[i] = s[i];
		i++;
	}
	out[i++] = '\0';
	return (out);
}
