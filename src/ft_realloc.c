/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaizab <oaizab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:29:23 by oaizab            #+#    #+#             */
/*   Updated: 2022/05/19 17:16:02 by oaizab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void	*tmp;

	if (size == 0)
	{
		free(ptr);
		return (malloc(0));
	}
	if (!ptr)
		return (malloc(size));
	tmp = malloc(size);
	if (!tmp)
		return (free(ptr), NULL);
	ft_memcpy(tmp, ptr, size);
	free(ptr);
	return (tmp);
}
