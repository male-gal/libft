/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: male-gal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 15:07:04 by male-gal          #+#    #+#             */
/*   Updated: 2018/04/07 19:02:07 by male-gal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	long long		ct;
	unsigned long	nb;
	int				neg;

	nb = 0;
	ct = 0;
	neg = 1;
	while (nptr[ct] == ' ' || nptr[ct] == '\t' || nptr[ct] == '\r'
			|| nptr[ct] == '\f' || nptr[ct] == '\v' || nptr[ct] == '\n')
		ct++;
	if (nptr[ct] == '-')
		neg = -1;
	if (nptr[ct] == '-' || nptr[ct] == '+')
		ct++;
	while (nptr[ct] >= 48 && nptr[ct] <= 57)
	{
		nb *= 10;
		nb += nptr[ct] - 48;
		ct++;
	}
	if (nb > 9223372036854775807)
		return (neg == -1 ? 0 : -1);
	return (nb * neg);
}
