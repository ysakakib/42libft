/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 16:52:17 by yusakaki          #+#    #+#             */
/*   Updated: 2026/04/26 18:20:44 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
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

// int	main(void)
// {
// 	char	str1[20] = "hello world";
// 	char	str2[20] = "hello world";

// 	// char	dst[40];
// 	// size_t	n = 5;
// 	memmove(str1 + 2, str1, 3);
// 	printf("%s\n", str1);
// 	ft_memmove(str2 + 2, str2, 3);
// 	printf("%s\n", str2);
// 	return (0);
// }
