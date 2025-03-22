/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitafern <aitafern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:52:27 by aitafern          #+#    #+#             */
/*   Updated: 2025/02/07 16:36:05 by aitafern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief locates the FIRST occurrence of the null-terminated string little 
///in the string big, where not more than len characters are searched.  
///Characters that appear after a ‘\0’ character are not searched.
/// @param big 
/// @param little 
/// @param len 
/// @return If little is an empty string, big is returned; 
///if little occurs nowhere in big, NULL is returned; otherwise a pointer to 
///the first character of the first occurrence of little is returned
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] && little[j] && big[i + j] == little[j]
			&& (i + j) < len)
			j++;
		if (little[j] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
