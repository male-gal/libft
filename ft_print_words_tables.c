/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: male-gal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 20:02:08 by male-gal          #+#    #+#             */
/*   Updated: 2018/04/07 17:13:30 by male-gal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_words_tables(char **tab)
{
	int n;
	int p;

	n = 0;
	while (tab[n])
	{
		p = 0;
		while (tab[n][p])
		{
			ft_putchar(tab[n][p]);
			p++;
		}
		n++;
		ft_putchar('\n');
	}
}
