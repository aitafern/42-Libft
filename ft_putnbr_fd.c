/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitafern <aitafern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:22:57 by aitafern          #+#    #+#             */
/*   Updated: 2025/02/15 14:01:33 by aitafern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Send the number 'n' to the given file descriptor.
/// converts the int to char so it can be written with write.
/// @param n 
/// @param fd 
void	ft_putnbr_fd(int n, int fd)
{
	char	number[10];
	int		i;

	i = 0;
	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	if (n == 0)
		write (fd, "0", 1);
	if (n != -2147483648 && n < 0)
	{
		n = n * -1;
		write (fd, "-", 1);
	}
	while (n > 0)
	{
		number[i] = ((n % 10) + '0');
		n = n / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write (fd, &number[i], 1);
		i--;
	}
}
