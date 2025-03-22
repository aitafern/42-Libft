/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitafern <aitafern <aitafern@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 18:41:59 by aitafern          #+#    #+#             */
/*   Updated: 2025/01/26 10:53:40 by aitafern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Allocates memory for an array of nmemb elements of size bytes each,
///The memory is set to zero.
///If nmemb or size is 0, then calloc() returns a unique pointer value that can 
///later be successfully passed to	free(void)
///If the multiplication of nmemb and size would result in integer overflow,
///then calloc(void) returns an error. (MAX_SIZE_T (~(size_t)0))
/// @param nmemb elements
/// @param size bytes each element
/// @return pointer to the allocated memory
void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*memory;

	if (nmemb == 0 || size == 0)
	{
		memory = malloc(0);
		if (!memory)
			return (NULL);
		return (memory);
	}
	if (nmemb > (~(size_t)0) / size)
		return (NULL);
	memory = malloc(nmemb * size);
	if (!memory)
		return (NULL);
	ft_bzero(memory, nmemb * size);
	return (memory);
}
