/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitafern <aitafern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:24:53 by aitafern          #+#    #+#             */
/*   Updated: 2025/02/07 16:12:52 by aitafern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief returns a pointer to a new string which is a duplicate of 
//the string s. Memory for the new string is obtained with malloc(3),
// and can be freed with free(3).
/// @param s string to duplicate
/// @return new string
char	*ft_strdup(const char *s)
{
	char	*new_str;
	int		i;
	int		len_s;

	i = 0;
	len_s = ft_strlen(s);
	new_str = (char *)malloc(len_s + 1);
	if (!new_str)
		return (NULL);
	while (i < len_s)
	{
		new_str[i] = s[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
