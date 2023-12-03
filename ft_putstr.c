/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <ybouyzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:54:01 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/11/29 21:02:06 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(const char	*str, int *count)
{
	int	i;

	i = 0;
	if (str == NULL)
		ft_putstr("(null)", count);
	else
	{
		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
			*count += 1;
		}
	}
}
