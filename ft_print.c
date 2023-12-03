/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <ybouyzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:34:23 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/11/29 20:53:02 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print(va_list args, char format, int *count)
{
	if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(args, int), count);
	else if (format == 'c')
		ft_putchar(va_arg(args, int), count);
	else if (format == 's')
		ft_putstr(va_arg(args, const char *), count);
	else if (format == 'p')
	{
		ft_putstr("0x", count);
		ft_putadress(va_arg(args, void *), count);
	}
	else if (format == 'u')
		ft_unputnbr(va_arg(args, unsigned int), count);
	else if (format == 'x')
		ft_puthexa(va_arg(args, unsigned int), count, 1);
	else if (format == 'X')
		ft_puthexa(va_arg(args, unsigned int), count, 0);
	else
		ft_putchar(format, count);
}
