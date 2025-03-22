/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitafern <aitafern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 14:50:10 by aitafern          #+#    #+#             */
/*   Updated: 2025/02/07 16:23:14 by aitafern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Find the LAST occurrence of the character, from right to left.
/// @param s 
/// @param c 
/// @return returns a pointer to the LAST occurrence of the character c 
/// in the string s. Returns a pointer to the matched character or NULL 
///if the character is not found.  The terminating null byte is considered 
///part of the string, so that if c is specified as '\0', return a pointer to 
///the terminator.
char	*ft_strrchr(const char *s, int c)
{
	int	size;

	size = ft_strlen(s);
	while (size >= 0)
	{
		if (s[size] == (char)c)
			return ((char *)&s[size]);
		size--;
	}
	return (NULL);
}
