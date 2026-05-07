/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 06:00:09 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/06 22:18:12 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

// int	main(void)
// {
// 	int	fd;

// 	// 1. 標準出力 (File Descriptor 1) へのテスト
// 	printf("--- Test 1: Standard Output ---\n");
// 	ft_putstr_fd("Hello, 42 World!\n", 1);

// 	// 2. 標準エラー出力 (File Descriptor 2) へのテスト
// 	printf("\n--- Test 2: Standard Error ---\n");
// 	ft_putstr_fd("This is an error message.\n", 2);

// 	// 3. ファイルへの書き込みテスト
// 	printf("\n--- Test 3: File Output (test_output.txt) ---\n");
// 	fd = open("test_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	if (fd == -1)
// 	{
// 		perror("File open error");
// 		return (1);
// 	}
// 	ft_putstr_fd("Writing this string to a file using ft_putstr_fd.\n", fd);
// 	close(fd);
// 	printf("Done. Check 'test_output.txt' to see the result.\n");

// 	// 4. NULLチェックのテスト (セグフォが起きないか確認)
// 	printf("\n--- Test 4: NULL String ---\n");
// 	ft_putstr_fd(NULL, 1);
// 	printf("Passed NULL check.\n");

// 	return (0);
// }
