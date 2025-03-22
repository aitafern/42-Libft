/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitafern <aitafern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:18:52 by aitafern          #+#    #+#             */
/*   Updated: 2025/02/07 16:34:15 by aitafern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Reserve (with malloc(3)) and return a new
//string, formed by the concatenation of ’s1’ and ’s2’
/// @param s1 first string
/// @param s2 string to add to s1
/// @return new string
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_str = malloc(s1_len + s2_len + 1);
	if (!new_str)
		return (NULL);
	ft_strlcpy (new_str, s1, s1_len + 1);
	ft_strlcpy (new_str + s1_len, s2, s2_len +1);
	return (new_str);
}
