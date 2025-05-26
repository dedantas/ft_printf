/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedantas <dedantas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:05:04 by dedantas          #+#    #+#             */
/*   Updated: 2025/05/20 14:10:31 by dedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int				ft_printf(const char *str, ...);
int				ft_putnbr_base(unsigned int nbr, char *base);
int				ft_putnbr(int n);
int				ft_putstr(char *s);
int				ft_putchar(char c);
int				ft_putpointer(void *ptr);
unsigned int	ft_putnbr_u(unsigned int n);

#endif
