/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 06:00:09 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/08 07:35:58 by yusakaki         ###   ########.fr       */
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
// 	// 1. 通常の文字列
// 	ft_putstr_fd("Hello, 42!\n", 1);

// 	// 2. 空文字列 (何も表示されないはず)
// 	ft_putstr_fd("", 1);

// 	// 3. NULLポインタ (セグフォせず安全にリターンするか)
// 	ft_putstr_fd(NULL, 1);

// 	return (0);
// }
