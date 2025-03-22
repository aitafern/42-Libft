/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitafern <aitafern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 17:55:21 by aitafern          #+#    #+#             */
/*   Updated: 2025/02/07 17:10:25 by aitafern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digit(int n)
{
	int		count;
	long	num;

	count = 0;
	num = n;
	if (n < 0)
		num = -num;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static char	*fill_number(char *str, int n, int size)
{
	long	num;
	int		i;

	num = n;
	if (n < 0)
	{
		str[0] = '-';
		num = -num;
	}
	i = size - 1;
	str[i] = '\0';
	i--;
	if (num == 0)
		str[i] = '0';
	while (num > 0)
	{
		str[i] = (num % 10) + '0';
		num = num / 10;
		i--;
	}
	return (str);
}

/// @brief Using malloc(3), generate a string that represents the integer value
///received as an argument. Negative numbers have to be handled.
/// @param n integer value to convert
/// @return The string representing the number.
///NULL if the memory allocation fails.
char	*ft_itoa(int n)
{
	char	*num;
	int		digits;

	digits = count_digit(n) + 1;
	if (n < 0)
		digits++;
	num = malloc((digits) * sizeof(char));
	if (num == NULL)
		return (NULL);
	if (n == 0)
	{
		num[0] = '0';
		num[1] = '\0';
		return (num);
	}
	fill_number(num, n, digits);
	return (num);
}
