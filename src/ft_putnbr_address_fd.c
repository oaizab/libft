/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_address_fd.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 09:38:35 by hhamza            #+#    #+#             */
/*   Updated: 2022/06/08 09:50:21 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nb_size(unsigned long nb)
{
	int	size;

	size = 0;
	if (nb == 0)
	{
		return (1);
	}
	while (nb != 0)
	{
		nb = nb / 16;
		++size;
	}
	return (size);
}

static void	ft_print_nb_fd(unsigned long n, char *base, int fd)
{
	if (n > 15)
	{
		ft_print_nb_fd(n / 16, base, fd);
		ft_print_nb_fd(n % 16, base, fd);
	}
	else
	{
		ft_putchar_fd(base[n], fd);
	}
}

int	ft_putnbr_address_fd(unsigned long nb, char *base, int fd)
{
	ft_putstr_fd("0x", fd);
	ft_print_nb_fd(nb, base, fd);
	return (ft_nb_size(nb) + 2);
}
