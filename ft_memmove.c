/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 16:52:17 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/08 06:14:50 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d < s)
		return (memcpy(dst, src, n));
	else
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	return (dst);
}

// int	main(void)
// {
// 	char	str1[20] = "hello world";
// 	char	str2[20] = "hello world";

// 	printf("%s\n", (char *)memmove(str1 + 2, str1, 3));
// 	printf("%s\n", (char *)ft_memmove(str2 + 2, str2, 3));
// 	return (0);
// }

// void	*ft_memmove(void *dst, const void *src, size_t len)
// {
// 	unsigned char	*d;
// 	unsigned char	*s;

// 	d = (unsigned char *)dst;
// 	s = (unsigned char *)src;
// 	if (d < s)
// 		return (memcpy(dst, src, len));
// 	else
// 	{
// 		d[len] = '\0';//これは不要。
// 		while (len > 0)
// 		{
// 			len--;
// 			d[len] = s[len];
// 		}
// 	}
// 	return (dst);
// }

// void	*ft_memmove(void *dst, const void *src, size_t len)
// {
// 	unsigned char		*d;
// 	const unsigned char	*s;

// 	// if (!dst && !src)
// 	// 	return (NULL);
// 	d = (unsigned char *)dst;
// 	s = (const unsigned char *)src;
// 	if (d < s)
// 		return (ft_memcpy(dst, src, len));
// 	else
// 	{
// 		while (len > 0)
// 		{
// 			len--;
// 			d[len] = s[len];
// 		}
// 	}
// 	return (d);
// }

// void	*ft_memmove(void *dst, const void *src, size_t n)
// {
// 	unsigned char	*d;
// 	unsigned char	*s;

// 	d = (unsigned char *)dst;
// 	s = (unsigned char *)src;
// 	if (d < s)
// 		return (memcpy(dst, src, n));
// 	else
// 	{
// 		while (n > 0)
// 		{
// 			n--;
// 			d[n] = s[n];
// 		}
// 	}
// 	return (dst);
// }
