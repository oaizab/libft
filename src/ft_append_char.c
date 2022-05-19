/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaizab <oaizab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:24:48 by oaizab            #+#    #+#             */
/*   Updated: 2022/05/19 17:14:03 by oaizab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_append_char(char *str, char c)
{
	size_t	len;

	len = ft_strlen(str);
	str = ft_realloc(str, len + 2);
	if (!str)
		return (NULL);
	str[len] = c;
	str[len + 1] = '\0';
	return (str);
}
