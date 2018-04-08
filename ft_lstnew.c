/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: male-gal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 20:27:30 by male-gal          #+#    #+#             */
/*   Updated: 2018/04/07 21:21:55 by male-gal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(const void *content, size_t content_size)
{
	t_list		*new_link;

	if ((new_link = (t_list*)malloc(sizeof(t_list))) == 0)
		return (NULL);
	if (!content || !content_size)
	{
		new_link->content = NULL;
		new_link->content_size = 0;
		new_link->next = NULL;
	}
	else
	{
		if (!(new_link->content = (void *)malloc(sizeof(void *)
						* content_size)))
		{
			free(new_link);
			return (NULL);
		}
		new_link->content = ft_memcpy(new_link->content, content, content_size);
		new_link->content_size = content_size;
		new_link->next = NULL;
	}
	return (new_link);
}
