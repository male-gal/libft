/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: male-gal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 10:32:31 by male-gal          #+#    #+#             */
/*   Updated: 2018/04/03 19:10:04 by male-gal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int j;
	int len;

	i = 0;
	j = 0;
	len = 0;
	while (to_find[len])
		len++;
	if (len == 0)
		return ((char*)str);
	while (str[i])
	{
		while (str[i + j] == to_find[j])
		{
			if (j == len - 1)
				return ((char *)str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
