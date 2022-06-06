/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaizab <oaizab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 09:34:23 by oaizab            #+#    #+#             */
/*   Updated: 2022/06/06 09:39:32 by oaizab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_append_str(char *str, char *c)
{
	size_t	len;

	if (str)
		len = ft_strlen(str);
	else
		len = 0;
	str = ft_realloc(str, len + ft_strlen(c) + 1);
	if (!str)
		return (NULL);
	ft_strlcat(str, c, len + ft_strlen(c) + 1);
	return (str);
}
