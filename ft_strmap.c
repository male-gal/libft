/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: male-gal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:12:21 by male-gal          #+#    #+#             */
/*   Updated: 2018/04/05 16:18:40 by male-gal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*out;

	i = 0;
	out = ft_strnew(ft_strlen(s));
	if (!out)
		return (NULL);
	while (s[i])
	{
		out[i] = f(s[i]);
		i++;
	}
	return (out);
}
