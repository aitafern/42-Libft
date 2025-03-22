/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitafern <aitafern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 12:15:16 by aitafern          #+#    #+#             */
/*   Updated: 2025/02/07 16:17:52 by aitafern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Apply the 'f' function to each character in the string's', passing
///its index as the first argument and the own character as a second argument.
///It creates a new string (using malloc(3)) to collect The results of
///successive applications of 'F'.
/// @param s 
/// @param f function
/// @return New string modificated by 'f' function
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	int		i;

	i = 0;
	new_str = ft_strdup(s);
	if (new_str == NULL)
		return (NULL);
	while (new_str[i] != '\0')
	{
		new_str[i] = f(i, new_str[i]);
		i++;
	}
	return (new_str);
}
