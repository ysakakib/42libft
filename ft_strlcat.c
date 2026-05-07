/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 21:03:25 by hshimizu          #+#    #+#             */
/*   Updated: 2026/05/06 23:23:07 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t src_len = ft_strlen(src);
	size_t dst_len = 0;
	size_t i = 0;
	while (dst[dst_len] != '\0' && dst_len < size)
		dst_len++;
	if (dst_len == size)
		return (size + src_len);
	while ((dst_len + i + 1) < size && src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// int	main(void)
// {
// 	char	*src = "hello ";
// 	char	*dst = "world";

// 	printf("%zu\n", ft_strlcat(dst, src, 4));
// 	src = "hello ";
// 	dst = "world";
// 	printf("%zu\n", strlcat(dst, src, 4));
// 	return (0);
// }


// size_t	ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	size_t	i;
// 	size_t	src_len;
// 	size_t	dst_len;

// 	i = 0;
// 	src_len = ft_strlen(src);
// 	dst_len = ft_strlen(dst);
// 	if (dst_len >= size)
// 		return (src_len + size);
// 	while (src[i] != '\0' && (dst_len + i) < (size - 1))
// 	{
// 		dst[dst_len + i] = src[i];
// 		i++;
// 	}
// 	dst[dst_len + i] = '\0';
// 	return (src_len + dst_len);
// }


// size_t	ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	size_t	dst_len;
// 	size_t	src_len;
// 	size_t	i;

// 	src_len = ft_strlen(src);
// 	dst_len = 0;
// 	while (dst_len < size && dst[dst_len] != '\0')
// 		dst_len++;
// 	if (dst_len == size)
// 		return (size + src_len);
// 	i = 0;
// 	while (src[i] != '\0' && (dst_len + i + 1) < size)
// 	{
// 		dst[dst_len + i] = src[i];
// 		i++;
// 	}
// 	dst[dst_len + i] = '\0';
// 	return (dst_len + src_len);
// }

// size_t	ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	j = 0;
// 	if (ft_strlen(dst) >= size)
// 		return (ft_strlen(src) + size);
// 	while (dst[i] != '\0')
// 		i++;
// 	while (src[j] != '\0' && i < (size - 1))
// 	{
// 		dst[i] = src[j];
// 		i++;
// 		j++;
// 	}
// 	dst[i] = '\0';
// 	return (ft_strlen(src) + ft_strlen(dst));
// }

// size_t	ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	j = 0;
// 	if (ft_strlen(dst) >= size)
// 		return (ft_strlen(src) + size);
// 	while (dst[i] != '\0')
// 		i++;
// 	while (src[j] != '\0' && i < (size - 1))
// 	{
// 		dst[i] = src[j];
// 		i++;
// 		j++;
// 	}
// 	dst[i] = '\0';
// 	return (ft_strlen(src) + ft_strlen(dst));
// }

// static size_t	ft_strnlen(const char *dst, size_t size)
// {
// 	const char	*head;

// 	head = dst;
// 	while (size && *dst)
// 		(void)(size--, dst++);
// 	return (dst - head);
// }

// size_t	ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	size_t	len_dst;
// 	size_t	len_src;

// 	len_dst = ft_strnlen(dst, size);
// 	len_src = ft_strlen(src);
// 	dst += len_dst;
// 	size -= len_dst;
// 	while (1 < size && *src)
// 		*dst++ = (size--, *src++);
// 	if (size)
// 		*dst = 0;
// 	return (len_dst + len_src);
// }
