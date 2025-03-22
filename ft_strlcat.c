/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitafern <aitafern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:27:01 by aitafern          #+#    #+#             */
/*   Updated: 2025/02/07 16:14:59 by aitafern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief appends a specified number of characters (size) fron src to a 
///dst, ensuring destination is null-terminated and preventing buffer overflow.
/// @param dst 
/// @param src 
/// @param size 
/// @return the total length of the string they tried to create.
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;

	i = 0;
	dst_len = ft_strlen(dst);
	if (size > 0 && size > dst_len)
	{
		while (src[i] && i < (size - 1) - dst_len)
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = '\0';
		return (dst_len + ft_strlen(src));
	}
	return (size + ft_strlen(src));
}
