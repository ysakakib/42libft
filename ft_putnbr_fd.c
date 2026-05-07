/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 06:11:52 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/08 07:35:05 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
	}
	ft_putchar_fd((nb % 10) + '0', fd);
}

// int	main(void)
// {
// 	ft_putnbr_fd(0, 1);
// 	ft_putchar_fd('\n', 1);

// 	ft_putnbr_fd(42, 1);
// 	ft_putchar_fd('\n', 1);

// 	ft_putnbr_fd(-2147483648, 1); // intの最小値テスト
// 	ft_putchar_fd('\n', 1);

// 	return (0);
// }
