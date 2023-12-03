/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <ybouyzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:11:54 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/11/21 11:11:46 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa(unsigned int n, int *count, int type)
{
	if (n < 16)
	{
		if (type == 1)
			ft_putchar("0123456789abcdef"[n], count);
		if (type == 0)
			ft_putchar("0123456789ABCDEF"[n], count);
	}
	else
	{
		ft_puthexa(n / 16, count, type);
		ft_puthexa(n % 16, count, type);
	}
}
