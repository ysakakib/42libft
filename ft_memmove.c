/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 16:52:17 by yusakaki          #+#    #+#             */
/*   Updated: 2026/04/26 14:33:09 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	const unsigned char	*s;

	// if (!dst && !src)
	// 	return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d < s)
		return (ft_memcpy(dst, src, len));
	else
	{
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}
	}
	return (d);
}

int	main(void)
{
	char	str[20] = "hello world";
	// char	dst[40];
	// size_t	n = 5;
	memmove(str + 2, str, 3);
	printf("%s\n", str);
	ft_memmove(str + 2, str, 3);
	printf("%s\n", str);
	return (0);
}
