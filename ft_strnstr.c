/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: male-gal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 10:32:31 by male-gal          #+#    #+#             */
/*   Updated: 2018/04/03 19:45:12 by male-gal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t lenmax)
{
	size_t i;
	size_t j;

	i = 0;
	if (ft_strlen(str) == 0)
		return ((char*)str);
	while (i - 1 + ft_strlen(to_find) < lenmax && str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j+ 1] == '\0')
				return ((char *)str + i);
			j++;
		}
		i++;
	}
	return (0);
}
