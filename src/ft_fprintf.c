/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 09:12:20 by hhamza            #+#    #+#             */
/*   Updated: 2022/06/08 09:48:23 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_fprintf_check(char c, va_list ap, int fd)
{
	if (c == 'c')
		return (ft_putchar_fd(va_arg(ap, int), fd));
	if (c == 's')
		return (ft_putstr_fd(va_arg(ap, char *), fd));
	if (c == 'd' || c == 'i')
		return (ft_putnbr_fd(va_arg(ap, int), fd));
	if (c == 'u')
		return (ft_putnbr_unsigned_fd(va_arg(ap, unsigned int), fd));
	if (c == 'x')
		return (ft_putnbr_base_fd(va_arg(ap, int), "0123456789abcdef", fd));
	if (c == 'p')
		return (ft_putnbr_address_fd(va_arg(ap, long), "0123456789abcdef", fd));
	if (c == 'X')
		return (ft_putnbr_base_fd(va_arg(ap, int), "0123456789ABCDEF", fd));
	if (c == '%')
		return (ft_putchar_fd('%', fd));
	return (0);
}

int	ft_fprintf(int fd, const char *format, ...)
{
	va_list	ap;
	int		i;
	int		size;

	va_start(ap, format);
	i = 0;
	size = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			++i;
			size += ft_fprintf_check(format[i], ap, fd);
		}
		else
		{
			size += ft_putchar_fd(format[i], fd);
		}
		++i;
	}
	va_end(ap);
	return (size);
}
