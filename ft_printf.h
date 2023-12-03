/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <ybouyzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:45:05 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/11/29 01:06:35 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *count);
void	ft_putstr(const char *str, int *count);
size_t	ft_strlen(const char *str);
void	ft_putnbr(int n, int *count);
void	ft_puthexa(unsigned int n, int *count, int type);
void	ft_print(va_list args, char format, int *count);
void	ft_putadress(void *p, int *count);
void	ft_unputnbr(unsigned int n, int *count);

#endif
