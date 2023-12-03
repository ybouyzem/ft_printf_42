/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <ybouyzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:19:21 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/11/20 11:00:59 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	long	nb;
	char	c;

	nb = n;
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
		*count += 1;
	}
	if (nb <= 9)
	{
		c = nb + '0';
		write(1, &c, 1);
		*count += 1;
	}
	else
	{
		ft_putnbr(nb / 10, count);
		ft_putnbr(nb % 10, count);
	}
}
