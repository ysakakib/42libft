/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 16:50:23 by yusakaki          #+#    #+#             */
/*   Updated: 2026/04/26 04:07:13 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	return (dst);
}

int	main(void)
{
	char	src = "hello world";
	char	dst[40];
	size_t	n = 5;
	printf("%s\n", memcpy(dst, src, n));
	// printf("%s\n", ft_memcpy(dst, src, n));
	return (0);
}
