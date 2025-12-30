/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerama <kerama@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 10:24:04 by kerama            #+#    #+#             */
/*   Updated: 2025/11/04 09:34:04 by kerama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

void	handle_format(const char *ptr, int *i, int *total, va_list args);
int		ft_printf(const char *ptr, ...);
void	print_hex(int *count, unsigned long n);
void	print_bigx(int *count, unsigned long n);
void	ft_putptr(void *ptr, int *count);
void	ft_putchar(int *count, char c);
void	ft_putstr(int *count, char *s);
void	ft_putnum(int *count, int n);
void	ft_putu(int *count, unsigned int n);

#endif
