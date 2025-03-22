/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ..c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitafern <aitafern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 19:01:03 by aitafern          #+#    #+#             */
/*   Updated: 2025/01/25 19:58:45 by aitafern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Removes all characters from the string ’set’
///from the beginning and end of ’s1’, until a character not belonging to 
///’set’ is found. The resulting string is returned with a malloc(3) pool.
/// @param s1 string to clean
/// @param set part for clean
/// @return cleaned string
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			start;
	size_t			end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}
