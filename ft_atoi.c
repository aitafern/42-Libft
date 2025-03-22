/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitafern <aitafern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:11:21 by aitafern          #+#    #+#             */
/*   Updated: 2025/02/07 16:00:27 by aitafern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief ASCII to int
/// @param c char numbers
/// @return int numbers

static int	ft_isspace(int c)
{
	return ((c == ' ') || (c == '\f') || (c == '\n') || (c == '\r')
		|| (c == '\t') || (c == '\v'));
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	is_neg;
	int	number;

	i = 0;
	number = 0;
	is_neg = 1;
	while (ft_isspace(nptr[i]))
		i++;
	while ((nptr[i] == '-' || nptr[i] == '+') && ft_isdigit(nptr[i + 1]))
	{
		if (nptr[i] == '-')
			is_neg *= -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		number = number * 10 + (nptr[i] - '0');
		i++;
	}
	return (number * is_neg);
}
