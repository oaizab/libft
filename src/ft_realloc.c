/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaizab <oaizab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:29:23 by oaizab            #+#    #+#             */
/*   Updated: 2022/06/14 10:56:30 by oaizab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void	*tmp;
	int		i;

	if (size == 0)
	{
		free(ptr);
		return (ft_calloc(0, 0));
	}
	if (!ptr)
		return (ft_calloc(1, size));
	tmp = ft_calloc(1, size);
	if (!tmp)
		return (free(ptr), NULL);
	i = 0;
	while (((char *) ptr)[i] != '\0')
		i++;
	ft_memcpy(tmp, ptr, i);
	free(ptr);
	return (tmp);
}
