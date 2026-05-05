/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 06:11:52 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/05 06:16:25 by yusakaki         ###   ########.fr       */
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
// 	int	fd;

// 	// 1. 標準出力 (stdout) へのテスト
// 	ft_putendl_fd("--- Test 1: Standard Output ---", 1);
// 	ft_putnbr_fd(0, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(42, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(-2147483648, 1); // 最小値のテスト
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(2147483647, 1); // 最大値のテスト
// 	ft_putchar_fd('\n', 1);
// 	// 2. 標準エラー出力 (stderr) へのテスト
// 	ft_putendl_fd("\n--- Test 2: Standard Error ---", 1);
// 	ft_putnbr_fd(-123, 2);
// 	ft_putchar_fd('\n', 2);
// 	// 3. ファイルへの書き込みテスト
// 	ft_putendl_fd("\n--- Test 3: File Output (test_out.txt) ---", 1);
// 	fd = open("test_out.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	if (fd != -1)
// 	{
// 		ft_putnbr_fd(123456789, fd);
// 		ft_putendl_fd("\nCheck 'test_out.txt' to see the result.", 1);
// 		close(fd);
// 	}
// 	else
// 		ft_putendl_fd("Error: Could not open file.", 2);
// 	return (0);
// }
