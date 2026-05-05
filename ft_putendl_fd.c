/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 06:06:42 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/05 06:09:35 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// int	main(void)
// {
// 	// 1. 標準出力 (fd: 1) への出力テスト
// 	ft_putendl_fd("Hello, Libft!", 1);
// 	ft_putendl_fd("This is a second line.", 1);

// 	// 2. 標準エラー出力 (fd: 2) への出力テスト
// 	ft_putendl_fd("Warning: This is an error message.", 2);

// 	// 3. ファイルへの書き込みテスト
// 	int fd = open("test_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	if (fd != -1)
// 	{
// 		ft_putendl_fd("Writing to a file with a newline.", fd);
// 		close(fd);
// 	}

// 	return (0);
// }
