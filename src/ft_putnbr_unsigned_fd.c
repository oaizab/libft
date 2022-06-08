/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 09:37:41 by hhamza            #+#    #+#             */
/*   Updated: 2022/06/08 09:53:00 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nb_size(unsigned int nb)
{
	int	size;

	size = 0;
	if (nb == 0)
	{
		return (1);
	}
	while (nb != 0)
	{
		nb = nb / 10;
		++size;
	}
	return (size);
}

static void	ft_print_nb_fd(unsigned int n, int fd)
{
	if (n > 9)
	{
		ft_print_nb_fd(n / 10, fd);
		ft_print_nb_fd(n % 10, fd);
	}
	else
	{
		ft_putchar_fd(n + '0', fd);
	}
}

int	ft_putnbr_unsigned_fd(unsigned int nb, int fd)
{
	ft_print_nb_fd(nb, fd);
	return (ft_nb_size(nb));
}
