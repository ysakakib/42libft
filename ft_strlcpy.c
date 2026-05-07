/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 16:54:26 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/06 22:41:22 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	if (size == 0)
		return (len);
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

// int	main(void)
// {
// 	size_t	size1;
// 	size_t	size2;
// 	char	*src;
// 	char	dst1[40];
// 	char	dst2[40];

// 	src = "hello world";
// 	printf("%zu\n", ft_strlcpy(dst1, src, 6));
// 	// src = "hello world";
// 	// printf("%zu\n", strlcpy(dst2, src, 6));
// 	return (0);
// }


// size_t	ft_strlcpy(char *dst, const char *src, size_t size)
// {
// 	size_t i = 0;
// 	size_t len = ft_strlen(src);
// 	if (size == 0)
// 		return (len);
// 	while (i < (size - 1) && src[i] != '\0')
// 	{
// 		dst[i] = src[i];
// 		i++;
// 	}
// 	dst[i] = '\0';
// 	return (len);
// }


// size_t	ft_strlcpy(char *dst, const char *src, size_t size)
// {
// 	size_t i = 0;
// 	while (i < size && dst[i] != '\0')
// 	{
// 		dst[i] = src[i];
// 		i++;
// 	}
// 	dst[i] = '\0';
// 	return (len);
// }
