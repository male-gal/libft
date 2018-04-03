/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: male-gal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 15:07:04 by male-gal          #+#    #+#             */
/*   Updated: 2018/04/03 15:16:15 by male-gal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int		ct;
	long	nb;
	int		neg;

	nb = 0;
	ct = 0;
	neg = 0;
	while (nptr[ct] == ' ' || nptr[ct] == '\t' || nptr[ct] == '\r'
			|| nptr[ct] == '\f' || nptr[ct] == '\v' || nptr[ct] == '\n')
		ct++;
	if (nptr[ct] == '-')
		neg = 1;
	if (nptr[ct] == '-' || nptr[ct] == '+')
		ct++;
	while (nptr[ct] >= 48 && nptr[ct] <= 57)
	{
		nb *= 10;
		nb += nptr[ct] - 48;
		ct++;
	}
	if (neg == 1)
		return (-nb);
	else
		return (nb);
}
