/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitafern <aitafern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 17:04:50 by aitafern          #+#    #+#             */
/*   Updated: 2025/02/07 16:04:01 by aitafern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Scans the initial n bytes of the memory area pointed to by s for
//the first instance of c. Both c and the bytes of the memory area pointed to
//by s are inter‐preted as unsigned char. return a pointer to the matching byte
//or NULL if the character does not occur in the given memory area.
//If n is zero, the return value is zero*
/// @param s pointer
/// @param c to find
/// @param n initial bytes to scan
/// @return pointer to the matching byte
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
		{
			return (&ptr[i]);
		}
		i++;
	}
	return (NULL);
}
