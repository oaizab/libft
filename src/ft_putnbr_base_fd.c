/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 09:37:23 by hhamza            #+#    #+#             */
/*   Updated: 2022/06/08 09:50:30 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nb_size(unsigned int n)
{
	int	size;

	size = 0;
	if (n == 0)
	{
		return (1);
	}
	while (n != 0)
	{
		n = n / 16;
		++size;
	}
	return (size);
}

static void	ft_print_nb_fd(unsigned int n, char *base, int fd)
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

int	ft_putnbr_base_fd(unsigned int nb, char *base, int fd)
{
	ft_print_nb_fd(nb, base, fd);
	return (ft_nb_size(nb));
}
