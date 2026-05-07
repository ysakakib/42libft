/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 16:47:07 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/08 06:14:25 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// int	main(void)
// {
// 	char	str[10] = "AAAAAA";

// 	bzero(str, 5);
// 	printf("%s\n", str);
// 	ft_bzero(str, 5);
// 	printf("%s\n", str);
// 	return (0);
// }

// void	ft_bzero(void *s, size_t n)
// {
// 	ft_memset(s, 0, n);
// }

// void	ft_bzero(void *s, size_t n)
// {
// 	ft_memset(s, 0, n);
// }
