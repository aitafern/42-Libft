/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitafern <aitafern <aitafern@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:22:16 by aitafern          #+#    #+#             */
/*   Updated: 2025/01/26 11:06:55 by aitafern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Sends the char 'c' to the specified file descriptor.
/// @param c char to send
/// @param fd file descriptor to write
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
