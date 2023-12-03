/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <ybouyzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 13:28:53 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/11/29 00:55:29 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putadress(void *p, int *count)
{
	unsigned long	nb;
	char			*base;

	base = "0123456789abcdef";
	nb = (unsigned long) p;
	if (nb < 16)
	{
		ft_putchar(base[nb], count);
	}
	else
	{
		ft_putadress((void *)(nb / 16), count);
		ft_putadress((void *)(nb % 16), count);
	}
}
