/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unputnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <ybouyzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:03:24 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/11/29 00:40:58 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unputnbr(unsigned int nb, int *count)
{
	char			c;

	if (nb <= 9)
	{
		c = nb + '0';
		ft_putchar(c, count);
	}
	else
	{
		ft_unputnbr(nb / 10, count);
		ft_unputnbr(nb % 10, count);
	}
}
